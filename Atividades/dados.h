#include <stdio.h>
#include <stdlib.h>
#include "descricaodaunidade.h"
#include "descricaodocurso.h"

void gravar(){
    FILE *arquivo;
    arquivo = fopen("dados.txt","w");

    //Verificar se o arquivo existe. Se ele não existe, então
    //exibir a mensagem de arquivo não encontrado e sair da 
    //execução do programa

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1);} //encerrar o programa
    unidade un,*pun;
    senac sn,*psn;
    psn=&sn;
    pun=&un;

    printf("Digite o nome do curso:\n");
    fgets(psn->nomedocurso,50,stdin);

    printf("Digite a descricao do curso:\n");
    fgets(psn->descricao,100,stdin);

    printf("Descreva a carga horaria do curso:\n");
    fgets(psn->cargahoraria,10,stdin);

    printf("Digite a data de inicio do curso:\n");
    fgets(psn->datadeinicio,10,stdin);

    printf("Digite o preço do curso:\n");
    fgets(psn->preco,10,stdin);

    printf("Digite a unidade do curso:\n");
    fgets(pun->unidade,50,stdin);

    printf("Adicione a localização do curso:\n");
    fgets(pun->localizacao,50,stdin);

    printf("Digite o horario de funcionamento:\n");   
    fgets(pun->horariodefuncionamento,10,stdin);

    printf("Digite o telefone de contato:\n");
    fgets(pun->telefonedecontato,15,stdin);

    fprintf(arquivo,psn->nomedocurso);
    fprintf(arquivo,psn->descricao);
    fprintf(arquivo,psn->cargahoraria);

    fclose(arquivo);
}    