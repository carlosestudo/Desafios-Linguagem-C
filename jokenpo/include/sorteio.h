# include <stdlib.h>
# include <time.h>

// sorteia um numero aleatorio para a maquina.
int sorteio(){

    int numeroAleatorio;

    srand(time(NULL));
    numeroAleatorio = rand() %3 +1;

    return(numeroAleatorio);

}