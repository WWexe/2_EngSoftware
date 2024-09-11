document.addEventListener('DOMContentLoaded', () => {
    const btn0 = document.querySelector('.btn0');
    const btn1 = document.querySelector('.btn1');
    const btn2 = document.querySelector('.btn2');
    const btn3 = document.querySelector('.btn3');
    const btn4 = document.querySelector('.btn4');
    const btn5 = document.querySelector('.btn5');
    const btn6 = document.querySelector('.btn6');
    const btn7 = document.querySelector('.btn7');
    const btn8 = document.querySelector('.btn8');
    const btn9 = document.querySelector('.btn9');
    const btnC = document.querySelector('.btnC');
    const btnAdd = document.querySelector('.btnAdd');
    const btnSub = document.querySelector('.btnSub');
    const btnMul = document.querySelector('.btnMul');
    const btnEq = document.querySelector('.btnEq');
    const btnDot = document.querySelector('.btnDot');
    const visor = document.querySelector('.visor');
    const historico = document.querySelector('#historico');

    let currentInput = '';
    let operator = '';
    let previousInput = '';

    function updateVisor(value) {
        visor.innerText = value.toString().substring(0, 10);
    }

    function handleNumberClick(number) {
        currentInput += number;
        updateVisor(currentInput);
    }

    function handleOperatorClick(op) {
        if (currentInput === '' && previousInput === '' && currentInput) return;

        if (operator) {
            handleEqual();
        }

        previousInput = currentInput;
        operator = op;
        currentInput = '';
        updateVisor(`${previousInput} ${operator}`);
    }

    function handleClear() {
        currentInput = '';
        previousInput = '';
        operator = '';
        updateVisor('0');
    }

    function handleEqual() {
        if (currentInput === '' || previousInput === '' || !operator) return;

        let result;
        try {
            result = new Function('return ' + `${previousInput} ${operator} ${currentInput}`)();
        } catch (e) {
            result = 'Error';
        }
        updateVisor(result);
        const operation = `${previousInput} ${operator} ${currentInput} = ${result}`;
        addToHistorico(operation);
        currentInput = result;
        previousInput = '';
        operator = '';
    }

    function addToHistorico(operation) {
        const p = document.createElement('p');
        p.textContent = operation;
        historico.appendChild(p);
        saveHistorico(operation);
    }

    function handleDot() {
        if (!currentInput.includes('.')) {
            currentInput += '.';
            updateVisor(currentInput);
        }
    }

    function saveHistorico(operation) {
        let storedHistorico = JSON.parse(localStorage.getItem('historico')) || [];
        storedHistorico.push(operation);
        localStorage.setItem('historico', JSON.stringify(storedHistorico));
    }

    function loadHistorico() {
        let storedHistorico = JSO.parse(localStorage.getItem('historico')) || [];
        storedHistorico.forEach(operation => {
            const p = document.createElement('p');
            p.textContent = operation;
            historico.appendChild(p);
        });
    }

    function clearHistorico() {
        localStorage.removeItem('historico');
        historico.innerHTML = '';
    }

    btn0.addEventListener('click', () => handleNumberClick('0'));
    btn1.addEventListener('click', () => handleNumberClick('1'));
    btn2.addEventListener('click', () => handleNumberClick('2'));
    btn3.addEventListener('click', () => handleNumberClick('3'));
    btn4.addEventListener('click', () => handleNumberClick('4'));
    btn5.addEventListener('click', () => handleNumberClick('5'));
    btn6.addEventListener('click', () => handleNumberClick('6'));
    btn7.addEventListener('click', () => handleNumberClick('7'));
    btn8.addEventListener('click', () => handleNumberClick('8'));
    btn9.addEventListener('click', () => handleNumberClick('9'));
    btnAdd.addEventListener('click', () => handleOperatorClick('+'));
    btnSub.addEventListener('click', () => handleOperatorClick('-'));
    btnMul.addEventListener('click', () => handleOperatorClick('*'));
    btnEq.addEventListener('click', handleEqual);
    btnDot.addEventListener('click', handleDot);
    btnC.addEventListener('click', handleClear);

    loadHistorico(); 
});
