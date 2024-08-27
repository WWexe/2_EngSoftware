const pedido = {
    cliente: "João Silva",
    pratos: [],
    total: 0,
  
    adicionarPrato(nome, preco) {
      const prato = { nome, preco };
      this.pratos.push(prato);
      this.calcularTotal();
    },
  
    calcularTotal() {
      this.total = this.pratos.reduce((soma, prato) => soma + prato.preco, 0);
    },
  
    exibirResumo() {
      console.log(`Resumo do Pedido para: ${this.cliente}`);
      console.log("Pratos:");
      this.pratos.forEach((prato, index) => {
        console.log(`${index + 1}. ${prato.nome} - R$ ${prato.preco.toFixed(2)}`);
      });
      console.log(`Total: R$ ${this.total.toFixed(2)}`);
    }
  };
  
  // Exemplos de uso:
  pedido.adicionarPrato("Pizza Margherita", 30.00);
  pedido.adicionarPrato("Refrigerante", 5.00);
  
  pedido.exibirResumo();
  