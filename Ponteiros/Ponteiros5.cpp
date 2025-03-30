#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[100];
    char cpf[12];
    float saldo;
} ContaBancaria;

void criarConta(ContaBancaria *conta) {
	system("cls");
    printf("===============================\n");
    printf("    CRIACAO DE NOVA CONTA      \n");
    printf("===============================\n");
    
    printf("Digite o nome do titular: ");
    scanf(" %[^\n]", conta->nome);
    
    printf("Digite o CPF do titular (apenas numeros): ");
    scanf(" %[^\n]", conta->cpf);
    
    printf("Digite o valor do deposito inicial: R$ ");
    scanf("%f", &conta->saldo);
    
    printf("\nConta criada com sucesso!\n");
    printf("Titular: %s\n", conta->nome);
    printf("Saldo atual: R$ %.2f\n", conta->saldo);
}

void realizarDeposito(ContaBancaria *conta) {
    float valor;
    
    system("cls");
    printf("===============================\n");
    printf("       REALIZAR DEPOSITO       \n");
    printf("===============================\n");
    
    printf("Digite o valor do deposito: R$ ");
    scanf("%f", &valor);
    
    if (valor <= 0) {
        printf("Valor invalido! O deposito deve ser maior que zero.\n");
        return;
    }
    
    conta->saldo += valor;
    
    printf("\nDeposito realizado com sucesso!\n");
    printf("Titular: %s\n", conta->nome);
    printf("Saldo atual: R$ %.2f\n", conta->saldo);
}

void realizarSaque(ContaBancaria *conta) {
    float valor;
    
    system("cls");
    printf("===============================\n");
    printf("        REALIZAR SAQUE         \n");
    printf("===============================\n");
    
    printf("Digite o valor do saque: R$ ");
    scanf("%f", &valor);
    
    if (valor <= 0) {
        printf("Valor invalido! O saque deve ser maior que zero.\n");
        return;
    }
    
    if (valor > conta->saldo) {
        printf("Saldo insuficiente! Seu saldo atual eh R$ %.2f\n", conta->saldo);
        return;
    }
    
    conta->saldo -= valor;
    
    printf("\nSaque realizado com sucesso!\n");
    printf("Titular: %s\n", conta->nome);
    printf("Saldo atual: R$ %.2f\n", conta->saldo);
}

void consultarSaldo(ContaBancaria *conta) {
	system("cls");
    printf("===============================\n");
    printf("      INFORMACOES DA CONTA     \n");
    printf("===============================\n");
    
    printf("\nTitular: %s\n", conta->nome);
    printf("CPF: %s\n", conta->cpf);
    printf("Saldo atual: R$ %.2f\n", conta->saldo);
}

int main() {
    ContaBancaria conta;
    ContaBancaria *ptrConta = &conta;
    
    int opcao;
    
    criarConta(ptrConta);
    
    do {
        printf("===============================\n");
        printf("       MENU PRINCIPAL          \n");
        printf("===============================\n");
        printf("1 - Realizar deposito\n");
        printf("2 - Realizar saque\n");
        printf("3 - Consultar saldo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
            	realizarDeposito(ptrConta);
                break;
            case 2:
                realizarSaque(ptrConta);
                break;
            case 3:
                consultarSaldo(ptrConta);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
        
    } while (opcao != 0);
    
    return 0;
}


