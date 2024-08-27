const biblioteca = [
    // Exemplos iniciais
    { titulo: "1984", autor: "George Orwell", ano: 1949, disponivel: true },
    { titulo: "Dom Casmurro", autor: "Machado de Assis", ano: 1899, disponivel: true }
  ];
  
  function adicionarLivro(titulo, autor, ano, disponivel) {
    const livro = { titulo, autor, ano, disponivel };
    biblioteca.push(livro);
  }
  
  function removerLivro(titulo) {
    const index = biblioteca.findIndex(livro => livro.titulo === titulo);
    if (index !== -1) {
      biblioteca.splice(index, 1);
    }
  }
  
  function listarLivrosDisponiveis() {
    return biblioteca.filter(livro => livro.disponivel);
  }
  
  // Exemplos de uso:
  adicionarLivro("O Alquimista", "Paulo Coelho", 1988, true);
  adicionarLivro("A Revolução dos Bichos", "George Orwell", 1945, false);
  
  console.log("Livros Disponíveis:");
  console.log(listarLivrosDisponiveis());
  