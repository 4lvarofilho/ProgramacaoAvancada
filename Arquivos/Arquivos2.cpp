#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int numeros[4];
    int soma = 0;
    int i;
    
    arquivo = fopen("numeros.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo numeros.txt\n");
        printf("Certifique-se de que o arquivo existe no diretorio do programa\n");
        return 1;
    }
    
    for (i = 0; i < 4; i++) {
        if (fscanf(arquivo, "%d", &numeros[i]) != 1) {
            printf("Erro ao ler o numero %d do arquivo\n", i + 1);
            fclose(arquivo);
            return 1;
        }
        soma += numeros[i];
    }
    
    fclose(arquivo);
    
    printf("Numeros lidos do arquivo:\n");
    for (i = 0; i < 4; i++) {
        printf("Numero %d: %d\n", i + 1, numeros[i]);
    }
    
    printf("\nA soma dos numeros eh: %d\n", soma);
    
    return 0;
}
