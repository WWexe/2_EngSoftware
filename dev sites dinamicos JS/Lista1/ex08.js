function converterNotaEmLetra(nota) {
    let letra;

    switch (true) {
        case (nota >= 9 && nota <= 10):
            letra = 'A';
            break;
        case (nota >= 7 && nota < 9):
            letra = 'B';
            break;
        case (nota >= 5 && nota < 7):
            letra = 'C';
            break;
        case (nota >= 3 && nota < 5):
            letra = 'D';
            break;
        case (nota >= 0 && nota < 3):
            letra = 'F';
            break;
        default:
            letra = 'Nota inválida';
            break;
    }

    console.log("Nota em letra: " + letra);
}

let nota = parseFloat(prompt("Informe a nota numérica (0 a 10):"));
if (!isNaN(nota) && nota >= 0 && nota <= 10) {
    converterNotaEmLetra(nota);
} else {
    console.log("Nota inválida. Informe um número entre 0 e 10.");
}
