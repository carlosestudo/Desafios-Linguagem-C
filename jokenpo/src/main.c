#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include "../include/sorteio.h"
#include "../include/menu.h"

int main(void) {
   
    setlocale(LC_ALL, "portuguese");

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

    menuInicial();

    getchar();
    return 0;
}
