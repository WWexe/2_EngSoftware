create database lista002;
use lista002;

create table alunos (
    codigo int primary key,
    nome varchar(100),
    telefone varchar(11),
    cidade varchar(100)
);

desc alunos;

create table aluno2 (
    codigo int primary key,
    nome varchar(200),
    telefone varchar(50),
    cidade varchar(100)
);

create table funcionarios (
    nome varchar(100),
    telefone varchar(11),
    endereco varchar(100),
    cidade varchar(20),
    estado varchar(10),
    cep varchar(9),
    rg varchar(11),
    salario int
);

create table fornecedores (
    nome varchar(100),
    telefone varchar(11),
    cidade varchar(10),
    cep varchar(9),
    estado varchar(10),
    cnpj varchar(15),
    email varchar(50)
);

create table livros (
    codigo int primary key,
    nome varchar(100),
    categoria varchar(100),
    resumo varchar(200),
    precocusto int,
    precoventa int
);

create table estoque (
    codigo int primary key,
    nomedoproduto varchar(100),
    categoria varchar(100),
    quantidade int,
    fornecedor varchar(100),
    foreign key (fornecedor) references fornecedores(nome)
);

create table notas (
    codigo int primary key,
    nomedoaluno varchar(100),
    bimestre int,
    foreign key (nomedoaluno) references alunos(nome)
);

create table filmes (
	codigo int primary key,
    nome varchar(100),
    sinopse varchar(200),
    categoria varchar(100),
    diretor varchar(100)
);

drop table alunos;
desc alunos;
drop table livros;
drop table filmes;
rename table aluno2 to alunos;
desc alunos;
rename table estoque to produtos;
rename table notas to aprovados;
rename table aprovados to notas;
drop table notas;

create table caixa (
    identificador int primary key
);
alter table caixa
add observacao varchar(255);

alter table alunos
add cpf varchar(11);

desc caixa;

alter table caixa
add saldo float;

/*-------------------- questao 23 -------------------*/

create database controlepedidos;
use controlepedidos;

create table Cliente (
    id_cliente int auto_increment primary key,
    nome varchar(100) not null,
    telefone varchar(20),
    email varchar(100) unique
);

create table Pedido (
    id_pedido int auto_increment primary key,
    id_cliente int,
    data_pedido date not null,
    valor_total decimal(10, 2),
    foreign key (id_cliente) references Cliente(id_cliente)
);

create table Item (
    id_item int auto_increment primary key,
    id_pedido int,
    descricao varchar(255) not null,
    quantidade int not null,
    preco_unitario decimal(10, 2) not null,
    foreign key (id_pedido) references Pedido(id_pedido)
);

insert into Cliente (nome, telefone, email)
values ('Caça Rato', '11987654321', 'mouse.hunter@gmail.com');

insert into Pedido (id_cliente, data_pedido, valor_total)
values (1, '2024-09-11', 300.00);

insert into Item (id_pedido, descricao, quantidade, preco_unitario)
values (1, 'Cadeira de Escritório', 2, 150.00);








