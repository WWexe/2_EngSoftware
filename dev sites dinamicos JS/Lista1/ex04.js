function geraTabuada() {
    var n = parseFloat(prompt("Informe um número para gerar a tabuada: "));
    var tabuada = "Tabuada de " + n + ":\n";
    
    for (var i = 1; i <= 10; i++) {
        var resultado = n * i;
        tabuada += n + " x " + i + " = " + resultado + "\n";
    }
    alert(tabuada);
}
geraTabuada();

