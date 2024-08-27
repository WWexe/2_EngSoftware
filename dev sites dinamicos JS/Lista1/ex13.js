let numero1 = parseFloat(prompt("Digite o primeiro número:"));
let numero2 = parseFloat(prompt("Digite o segundo número:"));
let operacao = prompt("Escolha uma operação (+, -, *, /):");
let resultado;
switch (operacao) {
    case '+':
        resultado = numero1 + numero2;
        break;
    case '-':
        resultado = numero1 - numero2;
        break;
    case '*':
        resultado = numero1 * numero2;
        break;
    case '/':
        if (numero2 !== 0) {
            resultado = numero1 / numero2;
        } else {
            console.log("Erro: Divisão por zero não é permitida.");
            break;
        }
        break;
    default:
        console.log("Operação inválida.");
        break;
}
if (resultado !== undefined) {
    console.log("O resultado é: " + resultado);
}
