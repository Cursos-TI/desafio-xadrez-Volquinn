#include <stdio.h>

int main() {
    // Simulacao da torre(5 casas para a direita)

    int movimentoTorre = 5;


        printf("Movimento da Torre: \n");

    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");

    }   

printf("\n");


// Simulacao do bispo(5 casas na diagonal cima Direita)

    int movimentoBispo = 5;
    int contadorBispo =0;

        printf("Movimento do Bispo:\n");

    while (contadorBispo < movimentoBispo)
    {
        printf("Cima Direita\n");
         ++contadorBispo;
    }
    
printf("\n");


// Simulacao da Rainha(8 casas para a esquerda

    int movimentoRainha = 8;
    int contadorRainha = 0;

        printf("Movimento da Rainha:\n");

    do
    {
       printf("Esquerda\n");
        ++contadorRainha;

    } while (contadorRainha < movimentoRainha);
    
    printf("\n");

//Simulacao do Cavalo(2 casas baixo e 1 esquerda)

    int movBaixo = 2;
    int movEsquerda =1;

        printf("Movimento do Cavalo:\n");
    
    for (int i = 0; i <movBaixo; i++){
       
        printf("Baixo\n");

    if (i == movBaixo -1){
        int j = 0;
    while (j < movEsquerda)
    {
        printf("Esquerda\n");
        ++j;
    }
    
 }

}
    

return 0;

}
