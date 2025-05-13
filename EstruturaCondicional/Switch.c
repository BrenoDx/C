#include <stdio.h>
char menu(void){ //função
	char opDigitada;
	
	printf("\n*---------------------------*");
	printf("\n CADASTRO DE CLIENTES");
	printf("\n");
	printf("\n 1 - Consulta");
	printf("\n 2 - Alteração");
	printf("\n 3 - Inclusão");
	printf("\n 4 - Exclusão");
	printf("\n 0 - Sair");
	printf("\n*---------------------------*");
	
	printf("\n Selecione a opção");
	opDigitada=getchar();
	return opDigitada;
}

int main(void){
	char opcao = menu(); // retornando a opcao escolhida para variável opcao, dentro do Main.
	
	switch (opcao) // Escolha
	{
		case '1': //caso for...
		printf("\n Voce escolheu consulta");
		break;
		case '2':
			printf("\n Voce escolheu Alteração");
			break;
		case '3':
			printf("\n Voce escolheu Inclusão");
			break;
		case '4':
			printf("\n Voce escolheu Exclusão");
			break;
		case '0':
			printf("\n Voce escolheu SAIR");
			break;
		default:
		printf("Opção INVALIDA");
	}
	return 0;
	
}
