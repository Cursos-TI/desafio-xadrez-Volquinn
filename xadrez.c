#include <stdio.h>

// Simulação Torre (5 casas para Direita)

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Simulação Bispo (5 casas na Diagonal Cima Direita)

void moverBispo(int movimentos) {
    if (movimentos > 0) {
        printf("Cima Direita\n");
        moverBispo(movimentos - 1);
    }
}

// Simulação Rainha (8 casas para Esquerda)

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Simulação Cavalo (2 Cima + 1 Direita)

void moverCavalo() {
    int movCima = 2;
    int movDireita = 1;

    for (int i = 0; i < movCima; ++i) {
        for (int j = 0; j <= movDireita; ++j) {
            if (i == movCima - 1 && j == movDireita) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                continue;
            }
            if (i + j > 3) break;
        }
    }
}

int main() {
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

        printf("Movimento da Torre:\n");
        moverTorre(movimentoTorre);
        printf("\n");

        printf("Movimento do Bispo:\n");
        moverBispo(movimentoBispo);  
        printf("\n");

        printf("Movimento da Rainha:\n");
        moverRainha(movimentoRainha);
        printf("\n");

        printf("Movimento do Cavalo:\n");
        moverCavalo();
        printf("\n");


return 0;


}