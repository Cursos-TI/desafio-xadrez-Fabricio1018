#include <stdio.h>

int main(){

    // Torre: Move-se em linha reta horizontalmente ou verticalmente. Mover 5 casas para a direita.
    // Bispo: Move-se na diagonal. Mover 5 casas para cima e à direita.
    // Rainha: Move-se em todas as direções. Mover 8 casas para a esquerda.

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
    





    return 0;
}