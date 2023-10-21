#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//#define linha 2" Serve para definir quantos cadastros podem ser feitos na estrutura administrador.
#define linha 2
/*#define cad_fun 1000" Serve para definir a quantidade de cadastros a serem realizados nas
estruturas cad_funcionario e cad_cliente.*/
#define cad_fun 1000

int op;
static int fun_li=0;
static int cli_li=0;

void tela_init();
void login();
void red_senha();
void tela_ad();
void funfas();
void funfas_cad();
void exi_fun();
void red_fun();
void del_fun();
void cliente();
void cad_cli();
void exi_cli();
void red_cli();
void del_cli();
//Struct cria um tipo de grupo de dados a serem guardados em uma unica variavel.
struct administrador{
    char user[linha][100];
    char sen[linha][100];
    int cpf[linha];
};
struct administrador ad;

struct cad_funcionario{
    char nome[cad_fun][100];
    char cpf[cad_fun][100];
    char email[cad_fun][100];
    char telefone[cad_fun][100];
    char estado[cad_fun][100];
    char cidade[cad_fun][100];
    char bairro[cad_fun][100];
    char rua[cad_fun][100];
    char numero[cad_fun][100];
    char complemento[cad_fun][100];
    char cargo[cad_fun][100];
    char data[cad_fun][100];
    char salario[cad_fun][100];
    char recebe[cad_fun][100];
};
struct cad_funcionario fn;

struct cad_cliente{
    char nome[cad_fun][100];
    char cnpj[cad_fun][100];
    char email[cad_fun][100];
    char telefone[cad_fun][100];
    char estado[cad_fun][100];
    char cidade[cad_fun][100];
    char bairro[cad_fun][100];
    char rua[cad_fun][100];
    char numero[cad_fun][100];
    char data[cad_fun][100];
    char fat[cad_fun][100];
};
struct cad_cliente cli;

int main(){
    setlocale(LC_ALL, "portuguese");
    //strcpy � um comando usado para inserir dados dentro de uma vari�vel do tipo char.
    strcpy(ad.user[0], "paulo nogueira");
    strcpy(ad.sen[0], "thrat349");
    ad.cpf[0]=32165498755;
    strcpy(ad.user[1], "david gomes");
    strcpy(ad.sen[1], "thrat747");
    ad.cpf[1]=55789456123;
    tela_init();
    return 0;
}

void del_cli(){
    int del;
    int i;
    char rec_cnpj[100];
    printf("EXCLUIR CLIENTES\n\n");
    printf("Digite o CNPJ da Institui��o que deseja deletar\n");
    printf("CNPJ: ");
    gets(rec_cnpj);
    //for nesse caso esta sendo utilizado para apagar o cadastro de um cliente.
    for(i=0;i<cad_fun;i++){
    //if nesse caso esta sendo usado para validar a exist�ncia de um cadastro atr�ves do CNPJ inserido anteriormente.
        if(strcmp(rec_cnpj, cli.cnpj[i])==0){
            system("cls");
            printf("Institui��o: %s\n\n", cli.nome[i]);
            printf("1 - Deletar Cadastro\n\n0 - Voltar\n\nSua Op��o: ");
            scanf("%d", &del);
            setbuf(stdin, NULL);
    //esse if serve para o usu�rio ter certeza que quer deletar o cadastro do cliente.
            if(del==1){
                strcpy(cli.nome[i], "");
                strcpy(cli.cnpj[i], "");
                strcpy(cli.email[i], "");
                strcpy(cli.telefone[i], "");
                strcpy(cli.estado[i], "");
                strcpy(cli.cidade[i], "");
                strcpy(cli.bairro[i], "");
                strcpy(cli.rua[i], "");
                strcpy(cli.numero[i], "");
                strcpy(cli.data[i], "");
                strcpy(cli.fat[i], "");
                printf("\nCadastro deletado com Sucesso!\n");
                getchar();
                cliente();
            }
            else{
                cliente();
            }
        }
    }
    system("cls");
    printf("Usu�rio n�o Encontrado!");
    getchar();
    cliente();
}

void red_cli(){
    int val;
    int i;
    char rec_cnpj[100];
    printf("EDITAR CLIENTES\n\n");
    printf("Digite o CNPJ da Institui��o que deseja editar\n");
    printf("CNPJ: ");
    gets(rec_cnpj);
    //for nesse caso esta sendo utilizado para editar o cadastro de um cliente.
    for(i=0;i<cad_fun;i++){
    //if nesse caso esta sendo usado para validar a exist�ncia de um cadastro atr�ves do CNPJ inserido anteriormente.
        if(strcmp(rec_cnpj, cli.cnpj[i])==0){
            system("cls");
            printf("Usu�rio: %s\n\n1 - Editar Informa��es\n\n0 - Retornar\n\nSua Op��o: ", cli.nome[i]);
            scanf("%d", &val);
            setbuf(stdin, NULL);
    //esse if serve para o usu�rio ter certeza que quer editar o cadastro do Cliente.
            if(val==1){
                system("cls");
                printf("Nome da Institui��o: ");
                gets(cli.nome[i]);
                printf("CNPJ: ");
                gets(cli.cnpj[i]);
                printf("Email: ");
                gets(cli.email[i]);
                printf("Telefone: ");
                gets(cli.telefone[i]);
                printf("Estado: ");
                gets(cli.estado[i]);
                printf("Cidade: ");
                gets(cli.cidade[i]);
                printf("Bairro: ");
                gets(cli.bairro[i]);
                printf("Rua: ");
                gets(cli.rua[i]);
                printf("N�mero: ");
                gets(cli.numero[i]);
                printf("Data de vencimento da �ltima fatura: ");
                gets(cli.data[i]);
                printf("Situa��o da fatura: ");
                gets(cli.fat[i]);
                printf("\nDados Atualizados com Sucesso!\n");
                getchar();
                cliente();
            }
            else{
                cliente();
            }
        }
    }
    system("cls");
    printf("Usu�rio n�o Encontrado!");
    getchar();
    cliente();
}

void exi_cli(){
    int i;
    printf("EXIBIR CLIENTES\n\n");
    printf("Pressione ENTER para voltar!\n\n");
    printf("----------------------------------------------------------\n");
    //Esse for est� sendo usado para exibir todos os clientes cadastrados.
    for(i=0;i<cad_fun;i++){
    //esse if serve para validar a exist�ncia dos clientes para exibi-los.
        if(strlen(cli.nome[i])>0){
            printf("Nome da Institui��o: %s\n", cli.nome[i]);
            printf("CNPJ: %s\n", cli.cnpj[i]);
            printf("Email: %s\n", cli.email[i]);
            printf("Telefone: %s\n", cli.telefone[i]);
            printf("Estado: %s\n", cli.estado[i]);
            printf("Cidade: %s\n", cli.cidade[i]);
            printf("Bairro: %s\n", cli.bairro[i]);
            printf("Rua: %s\n", cli.rua[i]);
            printf("N�mero: %s\n", cli.numero[i]);
            printf("Data de vencimento da �ltima fatura: %s\n", cli.data[i]);
            printf("Situa��o da fatura: %s\n", cli.fat[i]);
            printf("----------------------------------------------------------\n");
        }
    }
        getchar();
        cliente();
}

void cad_cli(){
    int i;
    char cnpj[100];
    /*do while serve para repetir uma a��o at� o momento em que atingir a condi��o imposta no while.
    nesse caso serve para repetir o cadastro at� o usu�rio digitar "0".*/
    do{
        system("cls");
        printf("CADASTRAR CLIENTES\n\n");
        printf("Nome da Institui��o: ");
        gets(cli.nome[cli_li]);
        printf("CNPJ: ");
        gets(cnpj);
    //Esse for serve para verificar a exist�ncia de algum cadastro com o CNPJ inserido anteriormente.
        for(i=0;i<cad_fun;i++){
            while(strcmp(cnpj, cli.cnpj[i])==0){
                printf("\nCNPJ j� Cadastrado!\n");
                strcpy(cli.nome[cli_li], "");
                getchar();
                cliente();
            }
        }
        strcpy(cli.cnpj[cli_li], cnpj);
        printf("Email: ");
        gets(cli.email[cli_li]);
        printf("Telefone: ");
        gets(cli.telefone[cli_li]);
        printf("Estado: ");
        gets(cli.estado[cli_li]);
        printf("Cidade: ");
        gets(cli.cidade[cli_li]);
        printf("Bairro: ");
        gets(cli.bairro[cli_li]);
        printf("Rua: ");
        gets(cli.rua[cli_li]);
        printf("N�mero: ");
        gets(cli.numero[cli_li]);
        printf("Data de vencimento da �ltima fatura: ");
        gets(cli.data[cli_li]);
        printf("Situa��o da fatura: ");
        gets(cli.fat[cli_li]);
        cli_li++;
        printf("\n\nCliente cadastrado com sucesso!");
        printf("\n1 - Cadastrar outro Cliente\n0 - Voltar\n\nSua Op��o: ");
        scanf("%d", &op);
        setbuf(stdin, NULL);
    }while(op==1);
    cliente();
}

void cliente(){
    //esse do while serve para repetir a tela dos clientes enquanto o usu�rio n�o digitar 0.
    do{
        system("cls");
        printf("DADOS DOS CLIENTES\n\n");
        printf("1 - Cadastrar Clientes\n\n");
        printf("2 - Editar Clientes\n\n");
        printf("3 - Exibir Clientes\n\n");
        printf("4 - Excluir Clientes\n\n");
        printf("0 - Retornar ao Menu Principal\n\n");
        printf("Sua Op��o: ");
        scanf("%d", &op);
        setbuf(stdin, NULL);
    //switch case serve para reduzir a quantidade de ifs e elses, muito ultilizado em menus como esse.
        switch(op){
        case 1:
            system("cls");
            setbuf(stdin, NULL);
            cad_cli();
            break;
        case 2:
            system("cls");
            setbuf(stdin, NULL);
            red_cli();
            break;
        case 3:
            system("cls");
            setbuf(stdin, NULL);
            exi_cli();
            break;
        case 4:
            system("cls");
            setbuf(stdin, NULL);
            del_cli();
            break;
        case 0:
            system("cls");
            setbuf(stdin, NULL);
            tela_ad();
            break;
        default:
        system("cls");
        printf("Op��o inv�lida!\n");
        getch();
        break;
        }
    }while(op!=0);
    tela_ad();
}

void del_fun(){
    int del;
    int i;
    char rec_cpf[100];
    printf("EXCLUIR FUNCION�RIOS\n\n");
    printf("Digite o CPF do Funcion�rio que deseja deletar\n");
    printf("CPF: ");
    gets(rec_cpf);
    //esse for serve para apagar o funcion�rio cadastrado.
    for(i=0;i<cad_fun;i++){
    //esse if serve para validar a exist�ncia de um cadastro que tenha o CPF digitado.
        if(strcmp(rec_cpf, fn.cpf[i])==0){
            system("cls");
            ("----------------------------------------------------");
            printf("Funcion�rio: %s\n\n", fn.nome[i]);
            printf("1 - Deletar Cadastro\n\n0 - Voltar\n\nSua Op��o: ");
            scanf("%d", &del);
            setbuf(stdin, NULL);
    //Esse if serve para validar a escolha do usu�rio.
            if(del==1){
                strcpy(fn.nome[i], "");
                strcpy(fn.cpf[i], "");
                strcpy(fn.email[i], "");
                strcpy(fn.telefone[i], "");
                strcpy(fn.estado[i], "");
                strcpy(fn.cidade[i], "");
                strcpy(fn.bairro[i], "");
                strcpy(fn.rua[i], "");
                strcpy(fn.numero[i], "");
                strcpy(fn.complemento[i], "");
                strcpy(fn.cargo[i], "");
                strcpy(fn.data[i], "");
                strcpy(fn.salario[i], "");
                strcpy(fn.recebe[i], "");
                printf("\nFuncion�rio Deletado com Sucesso!\n");
                getchar();
                funfas();
            }
            else{
                funfas();
            }
        }
    }
    system("cls");
    printf("Usu�rio n�o Encontrado!");
    getchar();
    funfas();
}

void red_fun(){
    int val;
    int i;
    char rec_cpf[100];
    printf("EDITAR FUNCION�RIOS\n\n");
    printf("Digite o CPF do Funcion�rio para editar seus dados\n");
    printf("CPF: ");
    gets(rec_cpf);
     //esse for serve para editar o cadastro de algum funcion�rio.
    for(i=0;i<cad_fun;i++){
    //esse if serve para validar se existe algum cadastro que contenha o CPF digitado.
        if(strcmp(rec_cpf, fn.cpf[i])==0){
            system("cls");
            printf("Usu�rio: %s\n\n1 - Editar Informa��es\n\n0 - Retornar\n\nSua Op��o: ", fn.nome[i]);
            scanf("%d", &val);
            setbuf(stdin, NULL);
    //esse if serve para verificar a decis�o do usu�rio para editar o funcion�rio.
            if(val==1){
                system("cls");
                printf("Nome: ");
                gets(fn.nome[i]);
                printf("CPF: ");
                gets(fn.cpf[i]);
                printf("Email: ");
                gets(fn.email[i]);
                printf("Telefone: ");
                gets(fn.telefone[i]);
                printf("Estado: ");
                gets(fn.estado[i]);
                printf("Cidade: ");
                gets(fn.cidade[i]);
                printf("Bairro: ");
                gets(fn.bairro[i]);
                printf("Rua: ");
                gets(fn.rua[i]);
                printf("N�mero: ");
                gets(fn.numero[i]);
                printf("Complemento: ");
                gets(fn.complemento[i]);
                printf("Cargo: ");
                gets(fn.cargo[i]);
                printf("Data de Admiss�o: ");
                gets(fn.data[i]);
                printf("Sal�rio: ");
                gets(fn.salario[i]);
                printf("Data do Pagamento: ");
                gets(fn.recebe[i]);
                printf("\nDados Atualizados com Sucesso!\n");
                getchar();
                funfas();
            }
            else{
                funfas();
            }
        }
    }
    system("cls");
    printf("Usu�rio n�o Encontrado!");
    getchar();
    funfas();
}

void exi_fun(){
    int i;
    printf("EXIBIR FUNCION�RIOS\n\n");
    printf("Pressione ENTER para voltar!\n\n");
    printf("----------------------------------------------------------\n");
    //Esse for serve para exibir todos os cadastros existentes.
    for(i=0;i<cad_fun;i++){
    //Esse if serve para validar a exist�ncia dos cadastros dos funcion�rios nos vetores.
        if(strlen(fn.nome[i])>0){
            printf("Nome: %s\n", fn.nome[i]);
            printf("CPF: %s\n", fn.cpf[i]);
            printf("Email: %s\n", fn.email[i]);
            printf("Telefone: %s\n", fn.telefone[i]);
            printf("Estado: %s\n", fn.estado[i]);
            printf("Cidade: %s\n", fn.cidade[i]);
            printf("Bairro: %s\n", fn.bairro[i]);
            printf("Rua: %s\n", fn.rua[i]);
            printf("N�mero: %s\n", fn.numero[i]);
            printf("Complemento: %s\n", fn.complemento[i]);
            printf("Cargo: %s\n", fn.cargo[i]);
            printf("Data de Admiss�o: %s\n", fn.data[i]);
            printf("Sal�rio: %s\n", fn.salario[i]);
            printf("Data do Pagamento: %s\n", fn.recebe[i]);
            printf("----------------------------------------------------------\n");
        }
    }
        getchar();
        funfas();
}

void funfas_cad(){
    int i;
    char cpf[100];
    //Esse do serve para realizar os cadastros enquanto o usuario n�o digitar 1.
    do{
        system("cls");
        printf("CADASTRAR FUNCION�RIOS\n\n");
        printf("Nome: ");
        gets(fn.nome[fun_li]);
        printf("CPF: ");
        gets(cpf);
    //esse for serve para verificar a exist�ncia de um cadastro com o mesmo CPF inserido anteriormente.
        for(i=0;i<cad_fun;i++){
    //esse while serve para verificar a exist�ncia de um cadastro com o mesmo CPF inserido antes.
            while(strcmp(cpf, fn.cpf[i])==0){
                printf("\nCPF j� Cadastrado!\n");
                strcpy(fn.nome[fun_li], "");
                getchar();
                funfas();
            }
        }
        strcpy(fn.cpf[fun_li], cpf);
        printf("Email: ");
        gets(fn.email[fun_li]);
        printf("Telefone: ");
        gets(fn.telefone[fun_li]);
        printf("Estado: ");
        gets(fn.estado[fun_li]);
        printf("Cidade: ");
        gets(fn.cidade[fun_li]);
        printf("Bairro: ");
        gets(fn.bairro[fun_li]);
        printf("Rua: ");
        gets(fn.rua[fun_li]);
        printf("N�mero: ");
        gets(fn.numero[fun_li]);
        printf("Complemento: ");
        gets(fn.complemento[fun_li]);
        printf("Cargo: ");
        gets(fn.cargo[fun_li]);
        printf("Data de Admiss�o: ");
        gets(fn.data[fun_li]);
        printf("Sal�rio: ");
        gets(fn.salario[fun_li]);
        printf("Data do Pagamento: ");
        gets(fn.recebe[fun_li]);
        fun_li++;
        printf("\n\nFuncion�rio cadastrado com sucesso!");
        printf("\n1 - Cadastrar outro Funcion�rio\n0 - Voltar\n\nSua Op��o: ");
        scanf("%d", &op);
        setbuf(stdin, NULL);
    }while(op==1);
    funfas();
}

void funfas(){
    //Esse do serve para repetir a tela de funcion�rios enquanto o usuario n�o digitar 0 ou qualquer op��o.
    do{
        system("cls");
        printf("DADOS DOS FUNCION�RIOS\n\n");
        printf("1 - Cadastrar Funcion�rios\n\n");
        printf("2 - Editar Funcion�rios\n\n");
        printf("3 - Exibir Funcion�rios\n\n");
        printf("4 - Excluir Funcion�rios\n\n");
        printf("0 - Retornar ao Menu Principal\n\n");
        printf("Sua Op��o: ");
        scanf("%d", &op);
        setbuf(stdin, NULL);
    //esse switch serve para selecionar as op��es de telas existentes.
        switch(op){
        case 1:
            system("cls");
            setbuf(stdin, NULL);
            funfas_cad();
            break;
        case 2:
            system("cls");
            setbuf(stdin, NULL);
            red_fun();
            break;
        case 3:
            system("cls");
            setbuf(stdin, NULL);
            exi_fun();
            break;
        case 4:
            system("cls");
            setbuf(stdin, NULL);
            del_fun();
            break;
        case 0:
            system("cls");
            setbuf(stdin, NULL);
            tela_ad();
            break;
        default:
        system("cls");
        printf("Op��o inv�lida!\n");
        getch();
        break;
        }
    }while(op!=0);
    tela_ad();
}

void tela_ad(){
    int a;
    //Esse do serve para repetir a tela de menu principal enquanto o usuario n�o digitar 0 ou qualquer op��o.
    do{
        system("cls");
        printf("MENU PRINCIPAL\n\n");
        printf("1 - Dados dos Clientes\n\n");
        printf("2 - Dados dos Funcion�rios\n\n");
        printf("0 - Retornar a Tela Inicial\n\n");
        printf("Sua Op��o: ");
        scanf("%d", &a);
        setbuf(stdin, NULL);
    //esse switch serve para selecionar as op��es de telas existentes.
        switch(a){
        case 1:
            system("cls");
            setbuf(stdin, NULL);
            cliente();
            break;
        case 2:
            system("cls");
            setbuf(stdin, NULL);
            funfas();
            break;
        case 0:
            system("cls");
            setbuf(stdin, NULL);
            printf("Voc� Saiu da Conta!\nPressione ENTER Para voltar a Tela Inicial!\n");
            getchar();
            tela_init();
            break;
        default:
        system("cls");
        printf("Op��o inv�lida!\n");
        getch();
        break;
        }
    }while(a!=0);
    tela_init();
}

void login(){
    int i;
    char rec_user[100];
    char rec_sen[100];
    printf("LOGIN\n\n");
    printf("Usu�rio: ");
    gets(rec_user);
    printf("Senha: ");
    gets(rec_sen);
    //esse for serve para verificar a existencia de algum cadastro existente.
    for(i=0;i<linha;i++){
    //esse if serve para verificar se as informa��es inseridas est�o corretas.
        if((strcmp(rec_user, ad.user[0])==0&&strcmp(rec_sen, ad.sen[0])==0)){
            system("cls");
            printf("Bem-vindo %s!\nPressione ENTER Para Continuar!\n", ad.user[0]);
            getchar();
            tela_ad();
            break;
        }
    //esse else if serve para verificar se as informa��es inseradas est�o corretas.
        else if((strcmp(rec_user, ad.user[1])==0&&strcmp(rec_sen, ad.sen[1])==0)){
            system("cls");
            printf("Bem-vindo %s!\nPressione ENTER Para Continuar!\n", ad.user[1]);
            getchar();
            tela_ad();
            break;
        }
        else{
            printf("\nUsu�rio e/ou Senha Incorreto(s)!");
            getchar();
            tela_init();
            break;
        }
    }
}

void red_senha(){
    int i;
    char search_user[100];
    int search_cpf;
    char nov_sen[100];
    char conf_sen[100];
    printf("REDEFINIR SENHA\n\n");
    printf("Informe seu Usu�rio: ");
    gets(search_user);
    printf("Informe seu CPF: ");
    scanf("%d", &search_cpf);
    setbuf(stdin, NULL);
    //esse for serve para fazer uma verifica��o de cadastros para a redefini��o de senha.
    for(i=0;i<linha;i++){
    //Esse if compara o Usuario e CPF inseridos com os do codigo fonte.
        if((strcmp(ad.user[0], search_user)==0&&ad.cpf[0]==search_cpf)){
            printf("\nDigite sua Nova Senha: ");
            gets(nov_sen);
            printf("Confirme sua Nova Senha: ");
            gets(conf_sen);
    //esse while Continua rodando at� a senha inserida for igual a senha de confirma��o.
            while(strcmp(nov_sen, conf_sen)!=0){
                printf("\nAs Senhas n�o coincidem, Por Favor Repita o Processo!\n\n");
                printf("\nDigite sua Nova Senha: ");
                gets(nov_sen);
                printf("Confirme sua Nova Senha: ");
                gets(conf_sen);
            }
            strcpy(ad.sen[0], conf_sen);
            printf("\nSenha Alterada com Sucesso! Pressione ENTER para voltar a Tela Inicial!");
            getchar();
            tela_init();
        }
    //Esse if compara o Usuario e cpf inseridos com os do codigo fonte.
        else if((strcmp(ad.user[1], search_user)==0&&ad.cpf[1]==search_cpf)){
            printf("\nDigite sua Nova Senha: ");
            gets(nov_sen);
            printf("Confirme sua Nova Senha: ");
            gets(conf_sen);
    //esse while continua rodando at� a senha inserida for igual a senha de confirma��o.
            while(strcmp(nov_sen, conf_sen)!=0){
                printf("\nAs Senhas n�o coincidem, Por Favor Repita o Processo!\n\n");
                printf("\nDigite sua Nova Senha: ");
                gets(nov_sen);
                printf("Confirme sua Nova Senha: ");
                gets(conf_sen);
            }
            strcpy(ad.sen[1], conf_sen);
            printf("\nSenha Alterada com Sucesso! Pressione ENTER para voltar a Tela Inicial!");
            getchar();
            tela_init();
        }
        else{
            printf("\nUsu�rio n�o encontrado!");
            getchar();
            tela_init();
            break;
        }
    }
}

void tela_init(){
    int c;
    //Esse do serve para repetir a tela inicial enquanto o usuario n�o digitar 0 ou qualquer op��o.
    do{
        setbuf(stdin, NULL);
        system("cls");
        printf("TELA INICIAL\n\n");
        printf("1 - Login\n\n");
        printf("2 - Redefinir Senha\n\n");
        printf("0 - Sair\n\n");
        printf("Sua Op��o: ");
        scanf("%d", &c);
    //esse switch serve para selecionar as op��es de telas existentes.
        switch(c){
    case 1:
        system("cls");
        setbuf(stdin, NULL);
        login();
        break;
    case 2:
        system("cls");
        setbuf(stdin, NULL);
        red_senha();
        break;
    case 0:
        system("cls");
        printf("Programa encerrado!\n");
        exit(EXIT_SUCCESS);
        break;
    default:
        system("cls");
        printf("Op��o inv�lida!\n");
        getch();
        break;
        }
    }while(c!=0);
}
