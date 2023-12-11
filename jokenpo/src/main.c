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
#include "../include/menu_logic/MenuClassic.h"



int main() {
    
    setlocale(LC_ALL, "portuguese");
    //randomNumber(3);
   
    while(1){
        limparBuffer();
        menuJokenpo(1);
    }
    return 0;
}
