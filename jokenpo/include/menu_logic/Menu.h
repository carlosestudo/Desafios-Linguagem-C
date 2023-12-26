
void playJokenpoRound(int select, int selection){
    
    int machineSelection = 0;
    int winner = NULL;
    const char *options[] = {"pedra", "papel", "tesoura", "spock", "lagarto"};

        machineSelection = randomNumber(selection);
        winner = logicGame(select, machineSelection);

        printf("\nJogador escolheu %s\n", options[select - 1]);
        printf("\nMaquina escolheu %s\n", options[machineSelection - 1]);

        if(winner == 0){
            printf("Jogador Venceu!!!");
        }else if(winner == 1){
            printf("Maquina venceu!!!");
        }else{
            printf("temos um empate!!!");
        }

}



void menuJokenpo(int selection){
   
    int select = 0;
    
        switch (selection){

            case 1: 
              
                while(1){
 
                    displayMenu( menuClassic, sizeof( menuClassic) / sizeof(MenuList));
                   
                    if(scanf("%d", &select) == 1){
                    
                    if(select > 0 && select <= 3){
                            playJokenpoRound(select, 3);
                    }else if(select == 0){
                        break;
                    }else{
                        printf("seleção invalida!!!");
                    }

                    }else{
                        printf("seleção invalida!!!");
                    }
                  
                }

                break;

            case 2:
                

                while(1){
                    
                    displayMenu(menuBigBang, sizeof(menuBigBang) / sizeof(MenuList));
                    
                    if(scanf("%d", &select) == 1){
                  
                        if(select > 0 && select <= 5){
                            playJokenpoRound(select, 5);
                        }else if(select == 0){
                            break;
                        }else{
                            printf("seleção invalida!!!");
                        }
                    }else{
                        printf("seleção invalida!!!");
                    }
                }

            break;

        }    
}