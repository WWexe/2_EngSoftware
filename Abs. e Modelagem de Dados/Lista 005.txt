/*----------------- EX 01 ------------------*/

create database clinica;
use clinica;

create table sala (
    numero_sala int not null unique check (numero_sala > 1 and numero_sala < 50),
    andar int not null check (andar < 12),
    primary key (numero_sala)
);

create table medicos (
    crm varchar(15) not null unique,
    nome varchar(40) not null,
    idade int check (idade > 23),
    especialidade char(20) not null default 'ortopedia',
    cpf varchar(15) not null unique,
    data_admissao date,
    primary key (crm)
);

create table pacientes (
    rg varchar(15) not null unique,
    nome varchar(40) not null,
    data_nascimento date,
    cidade char(30) default 'itabuna',
    doenca varchar(40) not null,
    plano_saude varchar(40) not null default 'sus',
    primary key (rg)
);

create table funcionarios (
    matricula varchar(15) not null unique,
    nome varchar(40) not null,
    data_nascimento date not null,
    data_admissao date not null,
    cargo varchar(40) not null default 'assistente médico',
    salario float not null default 510.00,
    primary key (matricula)
);

create table consultas (
    codigo_consulta int not null unique,
    data_horario datetime not null,
    crm_medico varchar(15),
    rg_paciente varchar(15),
    numero_sala int,
    primary key (codigo_consulta),
    foreign key (crm_medico) references medicos(crm),
    foreign key (rg_paciente) references pacientes(rg),
    foreign key (numero_sala) references sala(numero_sala)
);

/*--------------------- EX 02 ------------------------*/

create database eleicao;
use eleicao;

create table cargo (
    codigo_cargo int not null unique,
    nome_cargo varchar(30) not null unique check (nome_cargo != 'prefeito' and nome_cargo != 'vereador'),
    salario float not null default 17000.00,
    numero_vagas int not null unique,
    primary key (codigo_cargo)
);

create table partido (
    codigo_partido int not null unique,
    sigla char(5) not null unique,
    nome varchar(40) not null unique,
    numero int not null unique,
    primary key (codigo_partido)
);

create table candidato (
    numero_candidato int not null unique,
    nome varchar(40) not null unique,
    codigo_cargo int not null,
    codigo_partido int not null,
    primary key (numero_candidato),
    foreign key (codigo_cargo) references cargo(codigo_cargo),
    foreign key (codigo_partido) references partido(codigo_partido)
);

create table eleitor (
    titulo_eleitor varchar(30) not null unique,
    zona_eleitoral char(5) not null,
    sessao_eleitoral char(5) not null,
    nome varchar(40) not null,
    primary key (titulo_eleitor)
);

create table voto (
    titulo_eleitor varchar(30) not null unique,
    numero_candidato int not null,
    primary key (titulo_eleitor),
    foreign key (titulo_eleitor) references eleitor(titulo_eleitor),
    foreign key (numero_candidato) references candidato(numero_candidato)
);

/*---------------------- EX 03 --------------------------*/

create database revendedora_carros;
use revendedora_carros;

create table automovel (
    renavam varchar(20) not null unique,
    placa varchar(10) not null unique,
    marca varchar(30) not null,
    modelo varchar(30) not null,
    ano_fabricacao int not null,
    ano_modelo int not null,
    cor varchar(20),
    motor varchar(20),
    numero_portas int not null,
    tipo_combustivel varchar(20) not null,
    preco float not null,
    primary key (renavam)
);

create table cliente (
    codigo_cliente int not null unique auto_increment,
    nome varchar(40) not null,
    sobrenome varchar(40) not null,
    telefone varchar(15),
    rua varchar(50),
    numero varchar(10),
    complemento varchar(20),
    bairro varchar(30),
    cidade varchar(30),
    estado char(2),
    cep varchar(10),
    primary key (codigo_cliente)
);

create table vendedor (
    codigo_vendedor int not null unique auto_increment,
    nome varchar(40) not null,
    sobrenome varchar(40) not null,
    telefone varchar(15),
    rua varchar(50),
    numero varchar(10),
    complemento varchar(20),
    bairro varchar(30),
    cidade varchar(30),
    estado char(2),
    cep varchar(10),
    data_admissao date not null,
    salario_fixo float not null,
    primary key (codigo_vendedor)
);

create table venda (
    codigo_venda int not null unique auto_increment,
    data_venda date not null,
    preco_pago float not null,
    codigo_cliente int not null,
    codigo_vendedor int not null,
    renavam varchar(20) not null,
    primary key (codigo_venda),
    foreign key (codigo_cliente) references cliente(codigo_cliente),
    foreign key (codigo_vendedor) references vendedor(codigo_vendedor),
    foreign key (renavam) references automovel(renavam)
);



