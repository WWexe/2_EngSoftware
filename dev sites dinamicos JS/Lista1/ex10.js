function calcularIMC(peso, altura) {
    return peso / (altura * altura);
}

function categorizarIMC(imc) {
    if (imc < 18.5) {
        return 'Baixo peso';
    } else if (imc >= 18.5 && imc < 24.9) {
        return 'Normal';
    } else if (imc >= 25 && imc < 29.9) {
        return 'Sobrepeso';
    } else {
        return 'Obesidade';
    }
}

let peso = parseFloat(prompt("Informe seu peso em kg:"));
let altura = parseFloat(prompt("Informe sua altura em metros:"));

if (!isNaN(peso) && peso > 0 && !isNaN(altura) && altura > 0) {
    let imc = calcularIMC(peso, altura);
    let categoria = categorizarIMC(imc);
    console.log("Seu IMC é " + imc.toFixed(2) + " e você está na categoria: " + categoria);
} else {
    console.log("Por favor, informe valores válidos para peso e altura.");
}
