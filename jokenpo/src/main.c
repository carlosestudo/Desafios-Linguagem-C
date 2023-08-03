#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include "../include/menu.h"
#include "../include/logicaJogo.h"



int main(void) {
    
    
    setlocale(LC_ALL, "portuguese");

    int iniciaJogo = 0;
   // int selecaoJogador = 0; caso precise

    //apresenta��o

    printf("\n");
    printf("******************************************\n");
    printf("*               BEM-VINDO                *\n");
    printf("*                  AO                    *\n");
    printf("*             SUPER  JOKENPO             *\n");
    printf("******************************************\n");
    printf("\n");
 
    printf("   >> Pressione Enter para continuar <<  \n");
   
    printf("\n");

    getchar();

    // inicia o jogo
    
    iniciaJogo = menuInicial();

    // printf("%d teste variavel retorno", iniciaJogo);

    switch (iniciaJogo)
    {
        case 0:

            printf("\t >> ALGO DEU ERRADO REINICIE O JOGO E TENTE NOVAMENTE << ");
            break;

        case 1: 
            
            jokenpoClassico();
           
            break;

        case 2:

            jokenpoBigBang();
            break;


        default:
            break;
    }

    getchar();
    return 0;
}
