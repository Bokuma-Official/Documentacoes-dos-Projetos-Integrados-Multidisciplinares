create database Folha_Pagamento_Ataron

create table Funcionario
(
	CPF varchar (14) primary key,
	Senha varchar (20) not null,
	Nome varchar (40) not null,
	Data_Nascimento varchar (10) not null,
	Sexo varchar (11) not null,
	PCD varchar (3) not null,
	PIS varchar (14) not null,
	RG varchar (12) not null,
	Carteira_Trabalho varchar (20) not null,
	Titulo_Eleitor varchar (14) not null,
	Certificado_Militar varchar (15),
	Matricula int not null,
	Telefone_Fixo varchar (14),
	Telefone_Celular varchar (15) not null,
	Email varchar (40) not null,
	Dependentes int not null
);

create table Endereco
(
	ID_Endereco int identity (1, 1) primary key, 
	CEP varchar (9) not null,
	Logradouro varchar (40) not null,
	Numero int not null,
	Bairro varchar (25) not null,
	Complemento varchar (20),
	Cidade varchar (25) not null,
	Estado varchar (20) not null,
	CPF varchar (14),
	foreign key (CPF) references Funcionario (CPF)
);

create table Contrato_Empresa
(
	ID_Contrato_Empresa int identity (1, 1) primary key,
	Data_Admissao varchar (10) not null,
	Numero_Conta varchar (9) not null,
	Numero_Agencia int not null,
	Nome_Agencia varchar (20) not null,
	Tipo_Contrato varchar (15) not null,
	Cargo varchar (40) not null,
	CBO_Cargo varchar (7) not null, 
	Departamento varchar (40) not null,
	CPF varchar (14),
	foreign key (CPF) references Funcionario (CPF),
);

create table Folha_Pagamento
(
	ID_Folha_Pagamento int identity (1, 1) primary key,
	Data_Pagamento varchar (10) not null,
	Horas_Trabalhadas int not null check (Horas_Trabalhadas between 0 and 200),
	Valor_Hora varchar (9) not null,
	Horas_Faltas int not null check (Horas_Faltas between 0 and 200),
	Desconto_Horas_Faltas varchar (9) not null,
	Horas_Extras int,
	Valor_Horas_Extras varchar (9),
	Valor_Vale_Transporte varchar (9) not null,
	Valor_Vale_Alimentacao varchar (9) not null,
	Desconto_INSS varchar (9) not null,
	Desconto_FGTS varchar (9) not null,
	Desconto_IRRF varchar (9) not null,
	Desconto_Vale_Transporte varchar (9) not null,
	Desconto_Vale_Alimentacao varchar (9) not null,
	Desconto_Seguro_Vida varchar (9) not null,
	Dias_Ferias int check (Dias_Ferias between 0 and 30),
	Valor_Ferias varchar (9),
	Valor_13_Salario varchar (9),
	Salario_Bruto varchar (9) not null,
	Salario_Liquido varchar (9) not null,
	CPF varchar (14),
	foreign key (CPF) references Funcionario (CPF)
);