int logicClassic(int select, int machineSelection){


    if ((machineSelection == STONE && select == SCISSORS) ||
        (machineSelection == SCISSORS && select == PAPER) ||
        (machineSelection == PAPER && select == STONE)) {
        // Máquina venceu
        return 0;
    } else if (machineSelection == select) {
        // Empate
        return -1;
    } else {
        // Jogador venceu
        return 1;
    }

}