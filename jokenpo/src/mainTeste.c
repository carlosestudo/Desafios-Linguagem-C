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


int main() {
  
    srand(time(NULL));
    int contador = 0;
    int teste = 0;

    while(contador < 20){
        teste = randomNumber(5);
        printf("\n%d", teste);
        contador ++;
    }
}