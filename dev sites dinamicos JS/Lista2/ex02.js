let produto1 = {
    nome: "arroz",
    preco: 10,
    qEstoque: 100,
    controle: 1001
};
function totalEstoque(produto1) {
    var total = produto1.preco * produto1.qEstoque
    if(total > produto1.controle) {
        console.log("Alerta! o total em estoque é > controle")
    } else {
        console.log("ALL SAFE!")
    }
}
totalEstoque(produto1);