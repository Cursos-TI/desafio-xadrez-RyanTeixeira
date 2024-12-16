#include <stdio.h>

// Constantes para direções possíveis
#define DIREITA 1
#define ESQUERDA -1

void movimentacaoBispo(int casas) {
    printf("Movimentação do Bispo: \n");
    for (int i = 1; i <= casas; i++) {
        printf("Movimento: %d casas na diagonal superior direita\n", i);
    }
}

int main() {
    int casas = 5; // Quantidade de casas para o Bispo

    movimentacaoBispo(casas);

    return 0;
}


void movimentacaoTorre(int casas) {
    printf("Movimentação da Torre: \n");
    for (int i = 1; i <= casas; i++) {
        printf("Movimento: %d casas para a direita\n", i);
    }
}

int main() {
    int casas = 5; // Quantidade de casas para a Torre

    movimentacaoTorre(casas);

    return 0;
}


void movimentacaoRainha(int casas) {
    printf("Movimentação da Rainha: \n");
    for (int i = 1; i <= casas; i++) {
        printf("Movimento: %d casas para a esquerda\n", i);
    }
}

int main() {
    int casas = 8; // Quantidade de casas para a Rainha

    movimentacaoRainha(casas);

    return 0;
}
