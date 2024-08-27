let numero = parseInt(prompt("Informe um número para iniciar a contagem regressiva:"), 10);

if (!isNaN(numero) && numero >= 0) {
    do {
        console.log(numero);
        numero--;
    } while (numero >= 0);
} else {
    console.log("Por favor, informe um número válido.");
}
