const vendasMensais = [1200, 1500, 1700, 1800, 1600, 2000, 1900, 2100, 2200, 2300, 2400, 2500];

const totalVendasAno = vendasMensais.reduce((total, vendas) => total + vendas, 0);
console.log(`Total de vendas do ano: R$ ${totalVendasAno.toFixed(2)}`);

const maiorVenda = Math.max(...vendasMensais);
const mesMaiorVenda = vendasMensais.indexOf(maiorVenda) + 1;
console.log(`Mês com a maior venda: Mês ${mesMaiorVenda} com R$ ${maiorVenda.toFixed(2)}`);

const valorLimite = 2000;
const mesesAcimaDoLimite = vendasMensais.filter(vendas => vendas > valorLimite);
console.log(`Meses com vendas acima de R$ ${valorLimite.toFixed(2)}:`, mesesAcimaDoLimite);

const valorVerificacao = 1500;
const houveMesAbaixoDoValor = vendasMensais.some(vendas => vendas < valorVerificacao);
console.log(`Houve algum mês com vendas abaixo de R$ ${valorVerificacao.toFixed(2)}:`, houveMesAbaixoDoValor);

const primeiroSemestre = vendasMensais.slice(0, 6);
const segundoSemestre = vendasMensais.slice(6);
console.log("Vendas do primeiro semestre:", primeiroSemestre);
console.log("Vendas do segundo semestre:", segundoSemestre);
