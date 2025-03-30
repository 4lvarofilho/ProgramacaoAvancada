#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nomes[4][100];
    int i;
    
    arquivo = fopen("nomes.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo nomes.txt\n");
        printf("Certifique-se de que o arquivo existe no diretório do programa\n");
        return 1;
    }

    for (i = 0; i < 4; i++) {
        if (fscanf(arquivo, "%s", nomes[i]) != 1) {
            printf("Erro ao ler o nome %d do arquivo\n", i + 1);
            fclose(arquivo);
            return 1;
        }

        int len = strlen(nomes[i]);
        if (len > 0 && nomes[i][len-1] == '\n') {
            nomes[i][len-1] = '\0';
        }
    }
    
    fclose(arquivo);

    printf("Nomes lidos do arquivo:\n");
    for (i = 0; i < 4; i++) {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }
    
    return 0;
}
