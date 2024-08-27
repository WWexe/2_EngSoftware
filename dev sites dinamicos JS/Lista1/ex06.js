var real; // Variável global para armazenar o valor em Reais

function print() {
    real = parseFloat(prompt("Informe o valor em Reais R$: "));
    if (isNaN(real) || real < 0) {
        console.log("Informe um valor válido!");
        return;
    }
    console.log("Real: R$" + real.toFixed(2));
}

function convertDol() {
    if (real === undefined || isNaN(real)) {
        console.log("Você precisa informar um valor primeiro.");
        return;
    }
    var dolar = (real / 5.51).toFixed(2);
    console.log("Dólar: US$" + dolar);
}

function convertEu() {
    if (real === undefined || isNaN(real)) {
        console.log("Você precisa informar um valor primeiro.");
        return;
    }
    var euro = (real / 6).toFixed(2);
    console.log("Euro: €" + euro);
}

print();
convertDol();
convertEu();
