const tarefas = document.querySelector("div#tarefas");

const registrar = document.forms.registro;
registrar.addEventListener("submit", function (e) {
    e.preventDefault();

    // valida para não adicionar campos vazios
    if (registrar.tarefa.value.trim().length === 0) {
        return;
    }

    const p = document.createElement("p");
    p.innerText = registrar.tarefa.value.trim();

    const verificar = document.querySelectorAll

    const checkbox = document.createElement("input");
    checkbox.setAttribute("type", "checkbox");
    checkbox.onclick = function () {
        if (this.checked) {
            tarefas.style.backgroundColor = "lightgreen";
        } else {
            tarefas.style.backgroundColor = "white";
        }

    }

    const dados = document.createElement("div");
    dados.classList.add("dados");
    dados.append(checkbox, p);

    const remover = document.createElement("button");
    remover.innerText = "Remover";
    remover.onclick = function () {
        if (checkbox.checked){
            this.parentNode.parentNode.removeChild(this.parentNode);
        }else{
            alert("Tarefa não está completa ");
        }
    }

    const div = document.createElement("div");
    div.classList.add("item");
    div.append(dados, remover);

    tarefas.appendChild(div);
    registrar.tarefa.value = "";
});