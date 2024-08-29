document.addEventListener('DOMContentLoaded', () => {
    const form = document.getElementById("form");
    const username = document.getElementById("username");

    form.addEventListener("submit", (event) => {
        event.preventDefault();
        checkForm();
    });

    form.addEventListener('input', () => {
        if (username.value.trim().length === 0) {
            return;
        }
    });

    username.addEventListener('input', checkInputUsername);

    function checkInputUsername() {
        const usernameValue = username.value.trim();
        if (usernameValue === "") {
            errorInput(username, "Informe seu nome");
        } else {
            const formItem = username.parentElement;
            formItem.className = "form-content";
        }
    }

    function checkForm() {
        checkInputUsername();

        const usernameValue = username.value.trim();

        if (usernameValue === "") {
            alert("PREENCHA TODOS OS CAMPOS PARA REALIZAR O SUBMIT!");
            return false;
        }

        const nome = document.createElement('p');
        nome.innerText = usernameValue; 
        document.body.appendChild(nome);

        form.reset();
        alert("TUDO SAFE MEU PATRAO");
        return true;
    }

    function errorInput(input, message) {
        const formItem = input.parentElement;
        const textMessage = formItem.querySelector("a");
        textMessage.innerText = message;
        formItem.className = "form-content error";
    }

    
});



