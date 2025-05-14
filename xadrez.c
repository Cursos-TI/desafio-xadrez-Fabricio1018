#include <stdio.h>

    // Recursividade para a TORRE:
    void recursivoTorre(int t){
        if(t > 0){
            printf("Direita\n");
            recursivoTorre(t-1);
        }
    }

    // Recursividade e Loops Aninhados para o BISPO:
    void recursivoBispo(int b){
        if(b > 0){
            for(int cima = 0; cima < 1; cima++){
                printf("Cima, ");
                for(int esquerda = 0; esquerda < 1; esquerda++){
                    printf("Esquerda\n");
                }
            }
            recursivoBispo(b - 1);
        }
    }

    // Recursividade para a RAINHA:
    void recursivoRainha(r){
        if(r > 0){
            printf("Esquerda\n");
            recursivoRainha(r - 1);
        }
    }


int main(){

    int torre, bispo;

    // TORRE:

    printf("Movimentos da TORRE:\n");
    torre = 5; // Valor inicial da torre.

    recursivoTorre(torre);
    
    printf("\n"); // Pular linha para facilitar a leitura.

    // BISPO

    printf("Movimentos do BISPO:\n");
    bispo = 5; // Valor inicial do bispo.

    recursivoBispo(bispo);

    printf("\n");

    //RAINHA:

    printf("Movimentos da RAINHA:\n");
    int rainha = 8; // Valor inicial da rainha.

    recursivoRainha(rainha);
    
    printf("\n");

    //CAVALO:

    printf("Movimento do CAVALO:\n");
    for(int cavaloCima = 0; cavaloCima < 2; cavaloCima++){
        printf("Cima\n");
        for(int cavaloDireita = 0; cavaloDireita < (cavaloCima == 1 ? 1 : 0); cavaloDireita++){
            printf("Direita\n");
        }
    }
    
    return 0;
}