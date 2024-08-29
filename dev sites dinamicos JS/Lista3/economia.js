document.addEventListener('DOMContentLoaded', () => {
    const form = document.getElementById("form");
    const username = document.getElementById("username");
    const curso = document.getElementById("curso");
    const idade = document.getElementById("idade");

    form.addEventListener("submit", (event) => {
        event.preventDefault();
        checkForm();
    });

    form.addEventListener('input', () => {
        if (username.value.trim().length === 0 && 
            curso.value.trim().length === 0 && 
            idade.value.trim().length === 0) {
            return;
        }
    });

    username.addEventListener('input', checkInputUsername);
    curso.addEventListener('input', checkInputCurso);
    idade.addEventListener('input', checkInputIdade);

    function checkInputUsername() {
        const usernameValue = username.value.trim();
        if (usernameValue === "") {
            errorInput(username, "Informe seu nome");
        } else {
            const formItem = username.parentElement;
            formItem.className = "form-content";
        }
    }

    function checkInputCurso() {
        const cursoValue = curso.value.trim();
        if (cursoValue === "") {
            errorInput(curso, "Informe um curso válido");
        } else {
            const formItem = curso.parentElement;
            formItem.className = "form-content";
        }
    }

    function checkInputIdade() {
        const idadeValue = idade.value.trim();
        if (idadeValue === "") {
            errorInput(idade, "Informe sua idade");
        } else {
            const formItem = idade.parentElement;
            formItem.className = "form-content";
        }
    }

    function checkForm() {
        checkInputUsername();
        checkInputCurso();
        checkInputIdade();

        const usernameValue = username.value.trim();
        const cursoValue = curso.value.trim();
        const idadeValue = idade.value.trim();

        if (usernameValue === "" || cursoValue === "" || idadeValue === "") {
            alert("PREENCHA TODOS OS CAMPOS PARA REALIZAR O SUBMIT!");
            return false;
        }

        const nome = document.createElement('h1');
        nome.innerText = "Nome: " + usernameValue;
        document.body.appendChild(nome);

        const cursoElement = document.createElement('h3');
        cursoElement.innerText = "Curso: " + cursoValue;
        document.body.appendChild(cursoElement);

        const idadeElement = document.createElement('h3');
        idadeElement.innerText = "Idade: " + idadeValue;
        document.body.appendChild(idadeElement);

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



