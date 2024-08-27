function exibirImparesNoIntervalo() {
    var inicio = parseInt(prompt("Informe o início do intervalo: "));
    var fim = parseInt(prompt("Informe o fim do intervalo: "));
    if (inicio > fim) {
        alert("O início do intervalo deve ser menor que o fim.");
        return;
    }
    var atual = inicio;
    var impares = "Números ímpares no intervalo:\n";

    while (atual <= fim) {
        if (atual % 2 !== 0) {
            impares += atual + "\n";
        }
        atual++;
    }
    alert(impares);
}
exibirImparesNoIntervalo();
