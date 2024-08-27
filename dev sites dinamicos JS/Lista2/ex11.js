const registros = {
    '2024-08-01': [
      { nomeDoAluno: 'João', presente: true },
      { nomeDoAluno: 'Maria', presente: false },
      { nomeDoAluno: 'Pedro', presente: true }
    ],
    '2024-08-02': [
      { nomeDoAluno: 'João', presente: true },
      { nomeDoAluno: 'Maria', presente: true },
      { nomeDoAluno: 'Pedro', presente: false }
    ]
  };
  
  function adicionarRegistro(data, presencas) {
    registros[data] = presencas;
  }
  
  function contarPresencas(nomeDoAluno) {
    return Object.values(registros)
      .flat()
      .filter(registro => registro.nomeDoAluno === nomeDoAluno && registro.presente)
      .length;
  }
  
  function alunosPresentesTodosOsDias() {
    const alunos = new Set();
    
    Object.values(registros).flat().forEach(registro => {
      alunos.add(registro.nomeDoAluno);
    });
  
    return Array.from(alunos).filter(aluno => {
      return Object.values(registros).every(dia => 
        dia.some(registro => registro.nomeDoAluno === aluno && registro.presente)
      );
    });
  }
  
  function alunosFaltaramTodosOsDias() {
    const alunos = new Set();
    
    Object.values(registros).flat().forEach(registro => {
      alunos.add(registro.nomeDoAluno);
    });
  
    return Array.from(alunos).filter(aluno => {
      return Object.values(registros).every(dia => 
        !dia.some(registro => registro.nomeDoAluno === aluno && registro.presente)
      );
    });
  }
  
  function ordenarAlunosPorPresencas() {
    const presencasPorAluno = {};
  
    Object.values(registros).flat().forEach(registro => {
      if (registro.presente) {
        if (!presencasPorAluno[registro.nomeDoAluno]) {
          presencasPorAluno[registro.nomeDoAluno] = 0;
        }
        presencasPorAluno[registro.nomeDoAluno]++;
      }
    });
  
    return Object.entries(presencasPorAluno)
      .sort((a, b) => b[1] - a[1])
      .map(([nomeDoAluno]) => nomeDoAluno);
  }
  
  // Exemplos de uso:
  adicionarRegistro('2024-08-03', [
    { nomeDoAluno: 'João', presente: true },
    { nomeDoAluno: 'Maria', presente: false },
    { nomeDoAluno: 'Pedro', presente: true }
  ]);
  
  console.log("Presenças do João:", contarPresencas('João'));
  console.log("Alunos presentes todos os dias:", alunosPresentesTodosOsDias());
  console.log("Alunos que faltaram todos os dias:", alunosFaltaramTodosOsDias());
  console.log("Alunos ordenados por número de presenças:", ordenarAlunosPorPresencas());
  