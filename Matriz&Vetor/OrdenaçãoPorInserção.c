#include <stdio.h>//*****************
int main(void)
{
	int vetor[5] = {76, 63, 46, 14, 02};
	int limite = 5;
	printf("\n *----------------------------------*");
	printf("\n Vetor Original (Antes da classificação!)");
	printf("\n *----------------------------------*");
	
	int j = 0;
	int i = 0;
	
	for(int k = 0; k < limite; k++){
		printf("\n vetor [%d] = %d", k, vetor[k]);
	}
		//Aqui começa a ordenação por INSERÇÃO.
	for(i = 1; i < limite; i++){
		int aux = vetor[i];
		for(j = i - i; j >= 0; j--){
			vetor[j+1] = vetor[j];
			
		}
		vetor[j+1] = aux;
		
	}//Fm da ordenação por inserção
	printf("\n !!!");
	printf("\n *----------------------------------*");
	printf("\n Vetor Classificado por INSERCAO");
	printf("\n *----------------------------------*");
		for(int c = 0; c<limite; c++){
			printf("\n vetor[%d], = %d", c, vetor[c]);
		}
		return 0;
}
