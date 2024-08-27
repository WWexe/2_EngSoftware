const contaBancaria = {
    numero: '123456',
    titular: 'Maria Oliveira',
    saldo: 1000.00,
    transacoes: [],
  
    depositar(valor) {
      if (valor > 0) {
        this.saldo += valor;
        this.transacoes.push({ tipo: 'depósito', valor });
      } else {
        console.log('O valor do depósito deve ser positivo.');
      }
    },
  
    sacar(valor) {
      if (valor > 0 && valor <= this.saldo) {
        this.saldo -= valor;
        this.transacoes.push({ tipo: 'saque', valor });
      } else if (valor > this.saldo) {
        console.log('Saldo insuficiente.');
      } else {
        console.log('O valor do saque deve ser positivo.');
      }
    },
  
    visualizarHistorico() {
      console.log(`Histórico de Transações da Conta ${this.numero}:`);
      if (this.transacoes.length === 0) {
        console.log('Nenhuma transação registrada.');
      } else {
        this.transacoes.forEach((transacao, index) => {
          console.log(`${index + 1}. Tipo: ${transacao.tipo} - Valor: R$ ${transacao.valor.toFixed(2)}`);
        });
      }
    }
  };
  
  // Exemplos de uso:
  contaBancaria.depositar(500.00);
  contaBancaria.sacar(200.00);
  contaBancaria.visualizarHistorico();
  