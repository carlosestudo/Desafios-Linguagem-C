
#include <stdio.h>
#include <locale.h>

#define MENU_HEADER 100

int menuInicial(){
   
    setlocale(LC_ALL, "portuguese");

    int selecaoMenu = 0;

    printf("\t||================ MENU =================||\n");
    printf("\t|| 1. Jokenpo Clássico                  ||\n");
    printf("\t|| 2. Jokenpo The Big Bang Theory        ||\n");
    printf("\t|| 3. Regras                             ||\n");
    printf("\t|| 4. Encerrar                           ||\n");
    printf("\t||=======================================||\n\n");

    printf("\tSELECIONE: ");
    scanf("%d", &selecaoMenu);

    if (selecaoMenu < 1 || selecaoMenu > 4)
    {
        printf("\n\n");
        printf("\tOPÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENTE!!!\n\n");
        menuInicial();

    }else{

        switch (selecaoMenu)
        {
        case 1:

            return 1;

            break;

        case 2: 

            return 2;

            break;

        case 3:

            printf("\t========== REGRAS DO JOKENPO ==========\n\n");
            printf("\t---------------------------------------\n\n");

            printf("\t========== JOKENPO CLASSICO ===========\n\n");

            printf("\tO Jokenpô é um jogo clasico disputado por você e a maquina,\n");
            printf("\tcada um escolhe entre pedra, papel ou tesoura.\n\n");
            printf("\tAs regras são:\n");
            printf("\t- A pedra vence a tesoura.\n");
            printf("\t- O papel vence a pedra.\n");
            printf("\t- A tesoura vence o papel.\n");
            printf("\t- Em caso de escolhas iguais, é um empate.\n\n");

            printf("\t---------------------------------------\n\n");

            printf("\t========= THE BIG BANG THEORY =========\n\n");

            printf("\tO Jokenpô The Big Bang Theory é uma\n");
            printf("\tvariação divertida do Jokenpô tradicional.\n\n");
            printf("\tAs regras são:\n");
            printf("\t- A pedra vence a tesoura e o lagarto.\n");
            printf("\t- A tesoura vence o papel e o lagarto.\n");
            printf("\t- O papel vence a pedra e Spock.\n");
            printf("\t- O lagarto vence o Spock e o papel.\n");
            printf("\t- Spock vence a tesoura e a pedra.\n");
            printf("\t- Em caso de escolhas iguais, é um empate.\n\n");

            printf("\t---------------------------------------\n\n");

            printf("\t >> Pressione Enter para continuar <<  \n");

            fflush(stdin);
            getchar();

            menuInicial();

            break;

        case 4: 

            printf("\tATE LOGO!!!");
            getchar();
            exit(0);
                
        default:

            printf("\t >> ALGO DEU ERRADO, CONTATE O SUPORTE << ");
            break;
        }

    }
    
 return 0;
}

int menuJokenpoClassico() {

    int selecao = 0;

    while (1)
    { 
        printf("\t========== JOKENPO CLASSICO ==========");

        printf("\n\n");

        printf("\tOpçoes: \n");

        printf("\t1. Para pedra\n");
        printf("\t2. Para papel\n");
        printf("\t3. Para tesoura\n");
        printf("\tSelecione:");
        fflush(stdin);
        scanf("%d", &selecao);

        if (selecao < 1 || selecao > 3)
        {
            printf("\t >> OPÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENTE << ");
            printf("\n\n");

        }
        else
        {
            switch (selecao)
            {
            case 1:
                return 1;
                break;
            case 2:
                return 2;
                break;
            case 3:
                return 3;
                break;
            default:

                printf("\t >> ALGO DEU ERRADO REINICIE O JOGO E TENTE NOVAMENTE <<");
                break;
            }
        }

    }

   
    return 0;
}

int menuJokenpoBigBang()
{
    int selecao = 0;

    while (1)
    {
        printf("\t========== JOKENPO THE BIG BANG THEORY ==========");

        printf("\n\n");

        printf("\tOpçoes: \n");

        printf("\t1. Para pedra\n");
        printf("\t2. Para papel\n");
        printf("\t3. Para tesoura\n");
        printf("\t4. Para spock\n");
        printf("\t5. Para lagarto\n");
        printf("\tSelecione:");
        fflush(stdin);
        scanf("%d", &selecao);

        if (selecao < 1 || selecao > 5)
        {
            printf("\t >> OPÇÃO INVALIDA, VERIFIQUE E TENTE NOVAMENTE << ");
            printf("\n\n");

        }
        else
        {
            switch (selecao)
            {
            case 1:
                return 1;
                break;
            case 2:
                return 2;
                break;
            case 3:
                return 3;
                break;
            case 4:
                return 4;
                break;
            case 5:
                return 5;
                break;
            default:
                printf("\t >> ALGO DEU ERRADO REINICIE O JOGO E TENTE NOVAMENTE <<");
                break;
            }
        }

    }


    return 0;

}