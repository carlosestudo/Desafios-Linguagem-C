# include <stdlib.h>
# include <time.h>

// sorteia um numero aleatorio para a maquina.
int sorteioClassico(){

    int numeroAleatorio;

    srand(time(NULL));
    numeroAleatorio = rand() %3 +1;

    return(numeroAleatorio);

}