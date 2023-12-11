int logicGame(int select, int machineSelection){
    
    
    if (machineSelection == select) {
        // Empate
        return -1;
    } else if ((machineSelection == STONE && (select == SCISSORS || select == LIZARD)) ||
        (machineSelection == PAPER && (select == STONE || select == SPOCK)) ||
        (machineSelection == SCISSORS && (select == PAPER || select == LIZARD)) ||
        (machineSelection == LIZARD && (select == SPOCK || select == PAPER)) ||
        (machineSelection == SPOCK && (select == SCISSORS || select == STONE))) 
    {
        // Máquina venceu
        return 0;
        
    } else {
        // Jogador venceu
        return 1;
    }

}