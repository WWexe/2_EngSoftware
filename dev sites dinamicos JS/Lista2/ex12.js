const playlist = [
    { titulo: 'Song A', artista: 'Artist 1', duracao: 210, genero: 'Pop' },
    { titulo: 'Song B', artista: 'Artist 2', duracao: 180, genero: 'Rock' },
    { titulo: 'Song C', artista: 'Artist 1', duracao: 240, genero: 'Pop' }
  ];
  
  function adicionarMusica(titulo, artista, duracao, genero) {
    const musica = { titulo, artista, duracao, genero };
    playlist.push(musica);
  }
  
  function removerMusica(titulo) {
    const index = playlist.findIndex(musica => musica.titulo === titulo);
    if (index !== -1) {
      playlist.splice(index, 1);
    }
  }
  
  function criarPlaylistPorGenero(genero) {
    return playlist.filter(musica => musica.genero === genero);
  }
  
  function calcularDuracaoTotal() {
    return playlist.reduce((total, musica) => total + musica.duracao, 0);
  }
  
  function ordenarPorDuracao() {
    return [...playlist].sort((a, b) => a.duracao - b.duracao);
  }
  
  // Exemplos de uso:
  adicionarMusica('Song D', 'Artist 3', 200, 'Jazz');
  console.log("Playlist após adicionar uma música:", playlist);
  
  removerMusica('Song B');
  console.log("Playlist após remover uma música:", playlist);
  
  const playlistPop = criarPlaylistPorGenero('Pop');
  console.log("Playlist de músicas Pop:", playlistPop);
  
  const duracaoTotal = calcularDuracaoTotal();
  console.log(`Duração total da playlist: ${duracaoTotal} segundos`);
  
  const playlistOrdenadaPorDuracao = ordenarPorDuracao();
  console.log("Playlist ordenada por duração:", playlistOrdenadaPorDuracao);
  