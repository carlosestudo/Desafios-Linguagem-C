
// sorteia um numero aleatorio para a maquina.
int randomNumber(int select){

    int number;

    srand(time(NULL));
    number= rand() %select +1;

    //printf("%d", number);

    return number;
}