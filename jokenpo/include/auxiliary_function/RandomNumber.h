int randomNumber(int select) {
    static int anterior = 0;  // static mantém o valor entre chamadas

    int number = rand() % select + 1;

    // Evita que o número sorteado seja igual ao anterior
    while (number == anterior) {
        number = rand() % select + 1;
    }

    anterior = number;

    return number;
}
