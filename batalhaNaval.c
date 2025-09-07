#include <stdio.h>

#define LINHA 20
#define COLUNA 20

int main() {

    //INICIANDO O TABULEIRO
    int tabuleiro[LINHA][COLUNA] = {0};

    for (int i = 0; i< LINHA; i++){
        for (int j = 0; j< COLUNA; j++){
        tabuleiro[i][j] = 0;
    }
    }

    //DECLARAÇÃO DE COORDENADAS
    int coordenada1[2] = {2,1};
    int coordenada2[2] = {2,6};
    int coordenada3[2] = {7,4};
    int coordenada4[2] = {5,6};

    //EXIBE O TABULEIRO LIMPO
    
    printf("INICIANDO O TABULEIRO (20x20)\n");
    printf("\n");
    printf("\n");
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("%d  ",tabuleiro[i][j]);
        }
        printf("\n");
        }
        printf("\n");
        printf("\n");
        printf("POSICIONANDO OS NAVIOS...\n");
        printf("\n");
        printf("\n");

        //POSICIONA O NAVIO1 NA HORIZONTAL COMEÇANDO DA COORDENADA 1
    for (int j = coordenada1[1]; j < coordenada1[1] + 3; j++){
            tabuleiro[coordenada1[0]][j] = 3;
        }
        //POSICIONA O NAVIO2 NA HORIZONTAL COMEÇANDO DA COORDENADA 2
    for (int j = coordenada2[0]; j < coordenada2[0] + 3; j++){
            tabuleiro[j][coordenada2[1]] = 3;
        }
        
        //POSICIONA O NAVIO3 NA DIAGONAL COMEÇANDO DA COORDENADA 3
        for (int j = 0; j< 3; j++){
            tabuleiro[coordenada3[0] + j][coordenada3[1] + j] = 3;
        }

        //POSICIONA O NAVIO4 NA DIAGONAL COMEÇANDO DA COORDENADA 4
    for (int j = coordenada1[1]; j < coordenada1[1] + 3; j++){
            tabuleiro[coordenada4[0] + j][coordenada4[1] + j] = 3;
        }




        //EXIBE OS NAVIOS POSICIONADOS
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("%d  ",tabuleiro[i][j]);
        }
        printf("\n");
        }

    printf("\n");
        printf("\n");
        printf("ATACANDO...\n");
        printf("\n");
        printf("\n");

     //CRIA UM CONE NO TABULEIRO NAS COORDENADAS [2,2]:
        for(int i = 0; i< 6; i++){
            int inicio = 2 - i;
            int fim = 2 + i;
            for(int j = inicio; j <= fim; j++){
                if (tabuleiro[2 + i][2 + j] == 3){
                    tabuleiro[2 + i][2 + j] = 5;
                }
                tabuleiro[2 + i][2 + j] = 7;
            }
        }

    //CRIA UMA CRUZ NO TABULEIRO NAS COORDENADAS [0,6]:
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if ((j > 2 && j<5)||(i > 2 && i < 5)){
                    if (tabuleiro [0 + i][6 + j] ==3){
                        tabuleiro[0 + i][6 + j] = 5;
                    }
                else{
                    tabuleiro[0 + i][6 + j] = 9;
                }  
                }
        }
        }

        //CRIA UM OCTAEDRO NO TABULEIRO NAS COORDENADAS [10,10]:
        //PARTE DE CIMA:
        for(int i = 0; i< 5; i++){
            int inicio = 10 - i;
            int fim = 10 + i;
            for(int j = inicio; j<= fim; j++){
                if (tabuleiro[10 + i][j] == 3){
                    tabuleiro[10 + i][j] = 5;
                }
                else{
                    tabuleiro[10 + i][j] = 4;
                }
            }
            }
        //PARTE DE BAIXO:
        for(int i = 0; i< 5; i++){
            int inicio = 10 - 3 + i;
            int fim = 10 + 3 - i;
            for(int j = inicio; j <= fim; j++){
                tabuleiro[15 + i][j] = 4;
                }
            }

    //EXIBE NOVAMENTE O TABULEIRO COM OS NAVIOS POSICIONADOS
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("%d  ",tabuleiro[i][j]);
        }
        printf("\n");
        }

    return 0;
}