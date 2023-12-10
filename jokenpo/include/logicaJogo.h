#include "sorteio.h"

int jokenpoClassico() 
{	
	int selecaoMaquina = 0;
	int selecaoJogador = 0;

	selecaoMaquina = sorteioClassico();
	selecaoJogador = menuJokenpoClassico();
	return 0;
}


int jokenpoBigBang()
{
	int selecaoJogador = 0;

	selecaoJogador = menuJokenpoBigBang();

	printf("teste selecao jogador %d", selecaoJogador);

	return 0;
}
