void menuJokenpoClassic(){
   // printf("falei que ia dar merda!!!");
    int select = 0;
    int machineSelection = 0;
    int winner = NULL;
    const char *options[] = {"pedra", "papel", "tesoura"};

    displayMenu( menuClassic, sizeof( menuClassic) / sizeof(MenuList));
   
    if(scanf("%d", &select) == 1){
       
        if((select <= 3) && (select > 0)){
            
            machineSelection = randomNumber(select);
            winner = logicClassic(select, machineSelection);

            printf("\nJogador escolheu %s\n", options[select - 1]);
            printf("\nMaquina escolheu %s\n", options[machineSelection - 1]);

            if(winner == 0){
                printf("Jogador Venceu!!!");
            }else if(winner == 1){
                printf("Maquina venceu!!!");
            }else{
                printf("temos um empate!!!");
            }

        }else{
            printf("\n======  SELEÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENRE ======");
        }

    }else{
        printf("\n======  SELEÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENRE ======");
    }
}