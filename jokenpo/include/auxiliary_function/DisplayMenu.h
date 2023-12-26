// Função para mostrar o menu.
void displayMenu(MenuList menuStart[], int numOptions) {
    
    size_t sizeDescription = strlen(menuStart[0].description); // guarda o tamanho do cabeçalho

    for (int i = 0; i < numOptions; i++) { 
        if(menuStart[i].index == MENU_HEADER){
            printf("\n||=========== %s ===========||\n\n", menuStart[i].description);
        }else{
            printf("  %d-> %s\n", menuStart[i].index, menuStart[i].description);
        }
    }    
    
    printf("  0-> Sair\n");
    
    printf("\n||");
        //adapta a ultima linha ao cabeçalho
        for(size_t i = 0; i < sizeDescription + 24; i++){
            printf("=");
        }
    printf("||\n");

    printf("\nSELECIONE: ");
}

