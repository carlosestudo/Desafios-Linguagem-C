void menuJokenpo(int selection){
   
    int select = 0;
    int machineSelection = 0;
    int winner = NULL;
    const char *options[] = {"pedra", "papel", "tesoura", "spock", "lagarto"};

    if(selection){ 
    
        displayMenu( menuClassic, sizeof( menuClassic) / sizeof(MenuList));
    
        if(scanf("%d", &select) == 1){
        
            if((select <= 3) && (select > 0)){
                
                machineSelection = randomNumber(select);
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

            } else if(select == 0){
                return;
            } else{
                printf("\n======  SELEÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENRE ======");
            }

        }else{
            printf("\n======  SELEÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENRE ======");
        }

    }else{

        displayMenu(menuBigBang, sizeof(menuBigBang) / sizeof(MenuList));

        if(scanf("%d", &select) == 1){
        
            if((select <= 5) && (select > 0)){
                
                machineSelection = randomNumber(select);
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

            }else if(select == 0){
                return;
            }else{
                printf("\n======  SELEÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENRE ======");
            }

        }else{
            printf("\n======  SELEÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENRE ======");
        }
    }
}