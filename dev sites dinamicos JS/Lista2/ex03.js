let user1 = {
    nome: "bill",
    idade: "900",
    email: "borabill@outlook.com"
};

let user2 = {
    nome: "fiDoBill",
    idade: "200",
    email: "borafidobill@outlook.com"
};

let user3 = {
    nome: "mulherDoBill",
    idade: "1000",
    email: "boramulherdobill@outlook.com"
};

const usuarios = [user1, user2, user3];

function filtro(usuarios) {
    if(usuarios.idade < 300){
        console.log("O usuario nao é maior de idade")
    }else {
        console.log("O usuario é maior de idade")
    }
}

filtro(usuarios);