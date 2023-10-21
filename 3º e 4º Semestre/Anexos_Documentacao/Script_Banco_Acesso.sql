create database Acesso_Ataron

create table Funcionario_Ataron
(
	CPF varchar (14) primary key,
	Senha varchar (20) not null,
	Nome varchar (40) not null,
	RG varchar (12) not null,
	PIS varchar (14) not null,
	Carteira_Trabalho varchar (20) not null,
	Titulo_Eleitor varchar (14) not null,
	Sexo varchar (15) not null,
	Certificado_Militar varchar (15),
	Data_Nascimento varchar (10) not null,
	Telefone_Fixo varchar (14),
	Telefone_Celular varchar (15) not null,
	Email varchar (40) not null,
	Matricula int not null,
	Departamento varchar (40) not null,
	Cargo varchar (40) not null,
	Data_Admissao varchar (10) not null,
	CEP varchar (9) not null
);