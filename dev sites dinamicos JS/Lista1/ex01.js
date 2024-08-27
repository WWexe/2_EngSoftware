var ano = parseInt(prompt("Informe um ano a ser comparado:"), 10);
function ehBissexto(ano) {
    if ((ano % 4 === 0 && ano % 100 !== 0) || (ano % 400 === 0)) {
        alert("O ano é bissexto");
    } else {
        alert("O ano NÃO é bissexto");
    }
}
ehBissexto(ano);
