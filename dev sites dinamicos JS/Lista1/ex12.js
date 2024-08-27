const usuarioCorreto = 'admin';
const senhaCorreta = 'admin';

let usuario = prompt("Digite seu nome de usuário:");
let senha = prompt("Digite sua senha:");

if (usuario === usuarioCorreto && senha === senhaCorreta) {
    console.log("Login bem-sucedido");
} else {
    console.log("Credenciais incorretas");
}
