#include <stdio.h>

int main(){

    // Torre: Move-se em linha reta horizontalmente ou verticalmente. Mover 5 casas para a direita.
    // Bispo: Move-se na diagonal. Mover 5 casas para cima e à direita.
    // Rainha: Move-se em todas as direções. Mover 8 casas para a esquerda.
    // Cavalo: Move-se duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L". Mover duas casas para baixo e uma para esquerda.

    int torre, bispo;

    // TORRE:

    torre = 1; // Valor inicial da torre.

    printf("Movimentos da TORRE:\n");
    while (torre <= 5)
    {
        printf("Direita\n");
        torre++;
    }
    
    printf("\n"); // Pular linha para facilitar a leitura.

    // BISPO

    bispo = 1; // Valor inicial do bispo.

    printf("Movimentos do BISPO:\n");
    do {
        printf("Cima, Direita\n");
        bispo++;
    } while (bispo <= 5);

    printf("\n"); // Pular linha para facilitar a leitura.

    //RAINHA:

    printf("Movimentos da RAINHA:\n");
    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Esquerda\n");
    }
    
    printf("\n");

    //CAVALO:

    int cavaloBaixo, cavaloEsquerda;

    cavaloBaixo = 1;

    printf("Movimento do CAVALO:\n");
    for(cavaloEsquerda = 0; cavaloEsquerda < 1; cavaloEsquerda++)
    {
        while (cavaloBaixo <= 2){
            printf("Baixo\n");
            cavaloBaixo++;
        }
        printf("Esquerda\n");
    }
    

    return 0;
}