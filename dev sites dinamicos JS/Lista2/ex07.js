function gerenciarProdutos(produtos, buscaPorNome = '', categoria = '', ordenarPorPreco = false) {
    let resultado = produtos;
  
    if (buscaPorNome) {
      resultado = resultado.filter(produto => produto.nome.toLowerCase().includes(buscaPorNome.toLowerCase()));
    }
  
    if (categoria) {
      resultado = resultado.filter(produto => produto.categoria.toLowerCase() === categoria.toLowerCase());
    }
  
    if (ordenarPorPreco) {
      resultado = resultado.sort((a, b) => a.preco - b.preco);
    }
  
    return resultado;
  }
  
  // Exemplos de uso:
  const produtos = [
    { nome: "Camiseta", preco: 29.99, categoria: "Roupas", estoque: 100 },
    { nome: "Tênis", preco: 199.99, categoria: "Calçados", estoque: 50 },
    { nome: "Cadeira", preco: 129.99, categoria: "Móveis", estoque: 20 },
    { nome: "Jaqueta", preco: 89.99, categoria: "Roupas", estoque: 10 }
  ];
  
  console.log("Produtos com nome 'Camiseta':");
  console.log(gerenciarProdutos(produtos, 'Camiseta'));
  
  console.log("Produtos na categoria 'Roupas':");
  console.log(gerenciarProdutos(produtos, '', 'Roupas'));
  
  console.log("Produtos ordenados por preço:");
  console.log(gerenciarProdutos(produtos, '', '', true));
  