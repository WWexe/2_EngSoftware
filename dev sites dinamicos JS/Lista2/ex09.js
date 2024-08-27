const tarefas = [];

function adicionarTarefa(titulo, descricao, prioridade, status = 'pendente') {
  const tarefa = { titulo, descricao, prioridade, status };
  tarefas.push(tarefa);
}

function removerTarefa(titulo) {
  const index = tarefas.findIndex(tarefa => tarefa.titulo === titulo);
  if (index !== -1) {
    tarefas.splice(index, 1);
  }
}

function atualizarStatus(titulo, novoStatus) {
  const tarefa = tarefas.find(tarefa => tarefa.titulo === titulo);
  if (tarefa) {
    tarefa.status = novoStatus;
  } else {
    console.log(`Tarefa com título "${titulo}" não encontrada.`);
  }
}

function ordenarPorPrioridade() {
  tarefas.sort((a, b) => a.prioridade - b.prioridade);
}

function listarTarefasPendentes() {
  return tarefas.filter(tarefa => tarefa.status === 'pendente');
}

// Exemplos de uso:
adicionarTarefa("Finalizar relatório", "Relatório financeiro do trimestre", 1);
adicionarTarefa("Reunião com cliente", "Discussão sobre novos requisitos", 2);
adicionarTarefa("Atualizar site", "Adicionar novas funcionalidades ao site", 3);

console.log("Todas as Tarefas:");
console.log(tarefas);

removerTarefa("Reunião com cliente");

console.log("Tarefas após remoção:");
console.log(tarefas);

atualizarStatus("Finalizar relatório", "concluída");

console.log("Tarefas após atualização de status:");
console.log(tarefas);

ordenarPorPrioridade();

console.log("Tarefas ordenadas por prioridade:");
console.log(tarefas);

console.log("Tarefas Pendentes:");
console.log(listarTarefasPendentes());
