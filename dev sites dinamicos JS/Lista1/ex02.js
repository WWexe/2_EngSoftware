var salario = parseInt(prompt("Informe seu salário:"));
var prestacao = parseInt(prompt("Informe o valor da prestação:"));
function analisaEmprestimo(salario, prestacao) {
    if (30 * salario / 100 >= prestacao) {
        alert("Empréstimo APROVADO");
    } else {
        alert("Empréstimo NEGADO");
    }
}
analisaEmprestimo(salario, prestacao);
