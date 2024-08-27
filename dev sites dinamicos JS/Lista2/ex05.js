const gerenciadorDeTarefas = {
    tarefas: [],
  
    adicionarTarefa(titulo, descricao, prioridade) {
      const tarefa = {
        titulo,
        descricao,
        status: 'não concluída',
        prioridade
      };
      this.tarefas.push(tarefa);
    },
  
    removerTarefa(titulo) {
      this.tarefas = this.tarefas.filter(tarefa => tarefa.titulo !== titulo);
    },
  
    alterarStatus(titulo, novoStatus) {
      const tarefa = this.tarefas.find(tarefa => tarefa.titulo === titulo);
      if (tarefa) {
        tarefa.status = novoStatus;
      } else {
        console.log(`Tarefa com título "${titulo}" não encontrada.`);
      }
    },
  
    exibirTarefas() {
      console.log("Tarefas:");
      this.tarefas.forEach((tarefa, index) => {
        console.log(`${index + 1}. Título: ${tarefa.titulo}`);
        console.log(`   Descrição: ${tarefa.descricao}`);
        console.log(`   Status: ${tarefa.status}`);
        console.log(`   Prioridade: ${tarefa.prioridade}`);
        console.log('---');
      });
    }
  };
  
  gerenciadorDeTarefas.adicionarTarefa("Estudar JavaScript", "Revisar conceitos de objetos e arrays", "alta");
  gerenciadorDeTarefas.adicionarTarefa("Comprar mantimentos", "Comprar frutas e vegetais", "média");
  
  gerenciadorDeTarefas.exibirTarefas();
  
  gerenciadorDeTarefas.alterarStatus("Estudar JavaScript", "concluída");
  
  gerenciadorDeTarefas.exibirTarefas();
  
  gerenciadorDeTarefas.removerTarefa("Comprar mantimentos");
  
  gerenciadorDeTarefas.exibirTarefas();
  