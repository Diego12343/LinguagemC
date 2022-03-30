#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "endereco.h"

void gravar(){

/*
O tipo FILE é utlizado para criar arquivos.
Este arquivo deve ser alocado em memória, portanto, sua
criação deve ser feita como ponteiro

*/
    FILE *arquivo;

    //A função fopen é reponsável por criar um arquivo
    //Este arquivo fica disponível em memória até o fechamento
    arquivo = fopen("dados.txt","w");

    //Verificar se o arquivo existe. Se ele não existe, então
    //exibir a mensagem de arquivo não encontrado e sair da 
    //execução do programa

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa
    }

    cliente cli, *pcli;
    endereco end,*pend;

    pcli = &cli;
    pend = &end;

    printf("Entre com o nome do cliente:\n");
    fgets(pcli->nome,50,stdin);

    printf("Entre com o cpf do cliente:\n");
   fgets(pcli->cpf,15,stdin);

    printf("Entre com o email do cliente:\n");
    fgets(pcli->email,100,stdin);

    printf("Entre com o datanascimento do cliente usando barras:\n");
    fgets(pcli->datanascimento,10,stdin);

    printf("Entre com o telefone do cliente:\n");
    fgets(pcli->telefone,20,stdin);

    printf("Entre com o tipo de endereco do cliente:\n");
    fgets(pend->tipo,10,stdin);

    printf("Entre com o logradouro do cliente:\n");
    fgets(pend->logradouro,100,stdin);

    printf("Entre com o numero do endereco do cliente:\n");   
    fgets(pend->numero,10,stdin);

    printf("Entre com o complemento do endereco do cliente:\n");
    fgets(pend->complemento,20,stdin);

    printf("Entre com o cep do endereco do cliente:\n");
    fgets(pend->cep,20,stdin);

    //gravar o nome no arquivo
    fprintf(arquivo,pcli->nome);
    fprintf(arquivo,pcli->cpf);
    fprintf(arquivo,pcli->email);
    
    //tirar o arquivo da memória. Fechar o arquivo
    fclose(arquivo);


}
