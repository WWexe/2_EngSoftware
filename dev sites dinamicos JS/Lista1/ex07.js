function isPrimo(numero) {
    if (numero <= 1) return false;
    if (numero === 2) return true;
    if (numero % 2 === 0) return false;

    for (let i = 3; i <= Math.sqrt(numero); i += 2) {
        if (numero % i === 0) return false;
    }
    return true;
}
function verificarNumeroPrimo() {
    while (true) {
        let entrada = prompt("Insira um número para verificar se é primo (ou 'sair' para encerrar):");
        if (entrada.toLowerCase() === 'sair') {
            console.log("Programa encerrado.");
            break;
        }
        let numero = parseInt(entrada, 10);
        if (isNaN(numero)) {
            console.log("Por favor, insira um número válido.");
            continue;
        }
        if (isPrimo(numero)) {
            console.log(numero + " é um número primo.");
        } else {
            console.log(numero + " não é um número primo.");
        }
    }
}
verificarNumeroPrimo();
