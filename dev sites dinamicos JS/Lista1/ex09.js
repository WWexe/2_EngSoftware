function fatorial(n) {
    if (n === 0 || n === 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

let numero = parseInt(prompt("Informe um número para calcular o fatorial: "), 10);

if (!isNaN(numero) && numero >= 0) {
    let resultado = fatorial(numero);
    console.log("O fatorial de " + numero + " é " + resultado);
} else {
    console.log("Por favor, informe um número inteiro não negativo.");
}
