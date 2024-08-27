function CelsiusToFahrenheit(celsius) {
    var rfahrenheit = (celsius * 1.8) + 32;
    alert("A temperatura em Fahrenheit: " + rfahrenheit);
}
function FahrenheitToCelsius(fahrenheit) {
    var rcelsius = (fahrenheit - 32) / 1.8;
    alert("A temperatura em Celsius: ", + rcelsius)
}

var opcao = parseInt(prompt("Convert Celsius to Fahrenheit - 1 | Convert Fahrenheit to Celsius - 2"));

switch(opcao) {
    case 1: 
        var celsius = parseInt(prompt("Informe a temperatura em Celsius:"));
        CelsiusToFahrenheit(celsius);
        break;
    case 2: 
        var fahrenheit = parseInt(prompt("Informe a temperatura em Fahrenheit:"));
        FahrenheitToCelsius(fahrenheit);
        break;
    default:
        alert("Opção inválida! Por favor, escolha 1 ou 2.");
}
