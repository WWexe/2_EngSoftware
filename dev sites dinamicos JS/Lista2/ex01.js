let notas = [7, 5, 9, 9, 9];

const soma = notas.reduce((acumulador, valorAtual) => acumulador + valorAtual, 0);
const media = soma / notas.length;

function calcMedia(){
    if(media < 7){
        console.log("O aluno foi REPROVADO");
        console.log("Notas: " + notas);
        console.log("Media: " + media);
    }else {
        console.log("O aluno foi APROVADO");
        console.log("Notas: " + notas);
        console.log("Media: " + media);
    }
}
calcMedia();

