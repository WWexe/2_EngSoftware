function calcularJurosCompostos(valorInicial, taxaJurosAnual, anos) {
    let valorAtual = valorInicial;
    for (let ano = 1; ano <= anos; ano++) {
        valorAtual *= (1 + taxaJurosAnual / 100);
        console.log(`Ano ${ano}: R$ ${valorAtual.toFixed(2)}`);
    }
    return valorAtual;
}
let valorInicial = parseFloat(prompt("Informe o valor inicial do investimento:"));
let taxaJurosAnual = parseFloat(prompt("Informe a taxa de juros anual (em %):"));
let anos = parseInt(prompt("Informe o número de anos do investimento:"), 10);

if (!isNaN(valorInicial) && valorInicial > 0 && !isNaN(taxaJurosAnual) && taxaJurosAnual > 0 && !isNaN(anos) && anos > 0) {
    calcularJurosCompostos(valorInicial, taxaJurosAnual, anos);
} else {
    console.log("Informe valores válidos para o valor inicial, taxa de juros e anos.");
}
