#define MENU_HEADER 100


#define STONE 1
#define PAPER 2
#define SCISSORS 3
#define SPOCK 4
#define LIZARD 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
//#include <windows.h>
//#include <conio.h>
#include <time.h>
#include "../include/list_menus/StructMenu.h"
#include "../include/auxiliary_function/DisplayMenu.h"
#include "../include/auxiliary_function/RandomNumber.h"
#include "../include/logic_game/LogicGame.h"
#include "../include/menu_logic/Menu.h"

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main() {
  
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese");
    int select = 0;
   
    while(1){

     displayMenu( menuStart, sizeof( menuStart) / sizeof(MenuList));
    
        if(scanf("%d", &select) != 1){
            printf("seleção invalida verifique e tente novamente");
        }else if(select <= 3 && select > 0){
            
            menuJokenpo(select);

        }else if(select == 0){
            exit(1);
        }else{
            printf("algo deu errado");
        }
    }
    
    return 0;
}
