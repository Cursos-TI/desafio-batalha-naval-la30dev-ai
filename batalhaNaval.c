#include <stdio.h>

int main() {

    //INICIANDO O TABULEIRO
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };


    //DECLARAÇÃO DE VARIÁVEIS (MAS NÃO USEI)
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};

    //DECLARAÇÃO DE COORDENADAS
    int coordenada1[2] = {2,1};
    int coordenada2[2] = {5,6};


    //EXIBE O TABULEIRO LIMPO
    
    printf("INICIANDO O TABULEIRO\n");
    printf("\n");
    printf("\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d  ",tabuleiro[i][j]);
        }
        printf("\n");
        }
        
        printf("POSICIONANDO OS NAVIOS...\n");
        printf("\n");
        printf("\n");
        //POSICIONA O NAVIO NA HORIZONTAL COMEÇANDO DA COORDENADA 1
    for (int j = coordenada1[1]; j < coordenada1[1] + 3; j++){
            tabuleiro[coordenada1[0]][j] = 3;
        }
        //POSICIONA O NAVIO NA VERTICAL COMEÇANDO DA COORDENADA 2
    for (int j = coordenada2[0]; j < coordenada2[0] + 3; j++){
            tabuleiro[j][coordenada2[1]] = 3;
        }

    //EXIBE NOVAMENTE O TABULEIRO COM OS NAVIOS POSICIONADOS
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d  ",tabuleiro[i][j]);
        }
        printf("\n");
        }

    return 0;
}
