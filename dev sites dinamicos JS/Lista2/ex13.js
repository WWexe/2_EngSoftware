const respostas = [4, 5, 3, 5, 2, 4, 5, 3, 4, 1, 5];

const mediaRespostas = respostas.reduce((total, resposta) => total + resposta, 0) / respostas.length;
console.log(`Média das respostas: ${mediaRespostas.toFixed(2)}`);

const notaMinima = 4;
const respostasAcimaNota = respostas.filter(resposta => resposta > notaMinima);
console.log(`Respostas acima da nota ${notaMinima}:`, respostasAcimaNota);

const valorVerificacao = 2;
const todosAcimaValor = respostas.every(resposta => resposta > valorVerificacao);
console.log(`Todos os clientes deram nota acima de ${valorVerificacao}:`, todosAcimaValor);

const respostasOrdenadas = [...respostas].sort((a, b) => b - a);
console.log("Respostas ordenadas da mais alta para a mais baixa:", respostasOrdenadas);

const contagemNotas = respostas.reduce((contador, nota) => {
  contador[nota] = (contador[nota] || 0) + 1;
  return contador;
}, {});
console.log("Contagem de cada nota:", contagemNotas);
