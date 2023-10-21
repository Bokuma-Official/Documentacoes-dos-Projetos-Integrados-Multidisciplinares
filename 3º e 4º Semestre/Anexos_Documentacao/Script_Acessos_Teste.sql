insert into Funcionario_Ataron values ('837.338.733-12', 'Gualte@43', 'Matheus Henrique de Sousa Cordeiro', '50.017.084-1', '150.67453.18.2', '8373387-331-2', '4529.4630.0105', 'Masculino', '88.044.746474.8', '16/04/1990', '(15) 3265-8383', '(15) 99373-3737', 'matheushcordeiro55@gmail.com', 635987, 'RH', 'Gerente', '27/10/2020', '18978-736')
insert into Funcionario_Ataron values ('634.233.541-10', 'Purex@90', 'Carlos Mendes dos Santos', '47.736.732-2', '190.72521.20.3', '6342335-411-0', '6352.6393.0102', 'Masculino', '90.733.836322.5', '20/08/1997', '(15) 3221-9092', '(15) 99742-7421', 'carlosmendes@ataron.com.br', 750715, 'RH', 'Auxiliar', '25/05/2022', '17535-831')

select * from Funcionario_Ataron

insert into Funcionario values ('725.937.837-10', 'Trevs@97', 'Matheus Cordeiro', '29/05/1987', 'Masculino', 'Não', '157.62621.19.5', '59.093.083-2', '7259378-371-0', '8262.3633.7262', '90.736.734262.9', 736363, '(15) 3274-7363', '(15) 99736-8363', 'matherscordeiro@gmail.com', 0)
insert into Funcionario values ('321.654.987-09', 'Yersa@53', 'Frederick Igor', '12/12/1999', 'Masculino', 'Não', '732.72626.23.9', '90.626.737-5', '3216549-870-9', '2522.7363.8363', '73.726.835266.1', 837372, '(15) 3290-7352', '(15) 99733-7362', 'frederickig@mernans.com.br', 1)

select * from Funcionario

insert into Endereco values ('18078-731', 'Rua Aparecido Soares', 99, 'Jardim Vila Maravilha', 'Não Tem', 'Sorocaba', 'São Paulo', '725.937.837-10')
insert into Endereco values ('17353-635', 'Rua Geraldo Mendes', 100, 'Jardim Pascoalto', 'Apartamento 96', 'Sorocaba', 'São Paulo', '321.654.987-09')

select * from Endereco

insert into Contrato_Empresa values ('22/09/2021', '210321-4', '1712', 'Banco do Brasil', 'CLT', 'Auxiliar Administrativo', '4110-05', 'Administração', '725.937.837-10')
insert into Contrato_Empresa values ('24/10/2022', '372532-5', '6236', 'Bradesco', 'CLT', 'Analista de Desenvolvimento de Software', '2124-05', 'TI', '321.654.987-09')

select * from Contrato_Empresa

insert into Folha_Pagamento values ('05/09/2023', 200, '8,00', 0, '0,00', 10, '16,00', '1000,00', '500,00', '138,60', '140,80', '0,00', '50,00', '50,00', '1,00', 0, '0,00', '0,00', '1760,00', '1379,60', '725.937.837-10')
insert into Folha_Pagamento values ('05/09/2023', 190, '15,00', 10, '150,00', 0, '0,00', '1200,00', '700,00', '245,06', '228,00', '189,59', '75,00', '70,00', '1,00', 0, '0,00', '0,00', '2850,00', '1890,35', '321.654.987-09')

select * from Folha_Pagamento