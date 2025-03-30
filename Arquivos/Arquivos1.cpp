#include <stdio.h>
#include <stdlib.h>

void criarArquivo() {
    char nomeArquivo[100];
    FILE *arquivo;
    
    system("cls");
    printf("\n========== CRIAR ARQUIVO ==========\n");
    printf("Digite o nome do arquivo a ser criado: ");
    scanf(" %[^\n]", nomeArquivo);
    
    arquivo = fopen(nomeArquivo, "w");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return;
    }
    
    printf("Arquivo '%s' criado com sucesso!\n", nomeArquivo);
    fclose(arquivo);
}

void inserirDadosSobrescrever() {
    char nomeArquivo[100];
    char conteudo[1000];
    FILE *arquivo;
    
    system("cls");
    printf("\n========== INSERIR DADOS (SOBRESCREVER) ==========\n");
    printf("Digite o nome do arquivo: ");
    scanf(" %[^\n]", nomeArquivo);
    
    arquivo = fopen(nomeArquivo, "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo ou arquivo nao existe!\n");
        return;
    }
    
    printf("Digite o conteudo a ser inserido (sobrescrever):\n");
    scanf(" %[^\n]", conteudo);
    
    fprintf(arquivo, "%s", conteudo);
    
    printf("Dados inseridos com sucesso!\n");
    fclose(arquivo);
}

void inserirDadosAcrescentar() {
    char nomeArquivo[100];
    char conteudo[1000];
    FILE *arquivo;
    
    system("cls");
    printf("\n========== INSERIR DADOS (ACRESCENTAR) ==========\n");
    printf("Digite o nome do arquivo: ");
    scanf(" %[^\n]", nomeArquivo);
    
    arquivo = fopen(nomeArquivo, "a");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo ou arquivo nao existe!\n");
        return;
    }
    
    printf("Digite o conteudo a ser inserido (acrescentar):\n");
    scanf(" %[^\n]", conteudo);
    
    fprintf(arquivo, "%s", conteudo);
    
    printf("Dados acrescentados com sucesso!\n");
    fclose(arquivo);
}

void exibirConteudo() {
    char nomeArquivo[100];
    FILE *arquivo;
    char caractere;
    
    system("cls");
    printf("\n========== EXIBIR CONTEUDO DO ARQUIVO ==========\n");
    printf("Digite o nome do arquivo: ");
    scanf(" %[^\n]", nomeArquivo);
    
    arquivo = fopen(nomeArquivo, "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo ou arquivo nao existe!\n");
        return;
    }
    
    printf("\nConteudo do arquivo '%s':\n", nomeArquivo);
    printf("----------------------------------------\n");
    
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }
    
    printf("\n----------------------------------------\n");
    fclose(arquivo);
}

void excluirArquivo() {
    char nomeArquivo[100];
    int resultado;
    
    system("cls");
    printf("\n========== EXCLUIR ARQUIVO ==========\n");
    printf("Digite o nome do arquivo a ser excluido: ");
    scanf(" %[^\n]", nomeArquivo);
    
    resultado = remove(nomeArquivo);
    
    if (resultado != 0) {
        printf("Erro ao excluir o arquivo ou arquivo nao existe!\n");
        return;
    }
    
    printf("Arquivo '%s' excluido com sucesso!\n", nomeArquivo);
}

void exibirMenu() {
    printf("\n========== MENU DE OPCOES ==========\n");
    printf("1 - Criar um arquivo\n");
    printf("2 - Inserir dados no arquivo (sobrescrever)\n");
    printf("3 - Inserir dados no arquivo (acrescentar)\n");
    printf("4 - Exibir conteudo do arquivo\n");
    printf("5 - Excluir arquivo\n");
    printf("6 - Sair\n");
    printf("===================================\n");
    printf("Digite sua opcao: ");
}

int main() {
    int opcao;
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                criarArquivo();
                break;
            case 2:
                inserirDadosSobrescrever();
                break;
            case 3:
                inserirDadosAcrescentar();
                break;
            case 4:
                exibirConteudo();
                break;
            case 5:
                excluirArquivo();
                break;
            case 6:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
        
    } while (opcao != 6);
    
    return 0;
}
