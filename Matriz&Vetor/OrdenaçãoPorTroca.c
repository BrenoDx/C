#include <stdio.h>
int main(void){
	int vetor[5] = {76, 63, 46, 14, 02}; //Vetor sem classificação
	int limite = 5;
	printf("-------------------------------");
	printf("\n Vetor original (antes da classificação)");
	printf("-------------------------------");
	for(int i = 0; i<limite; i++){
		printf("\n vetor[%d] = %d", i, vetor[i]);
	}
	//Aqui começa a classificação por TROCA
	for (int i = 1; i < limite; i++){
		for(int j = limite - 1; j >= i; j--){
			if(vetor[j - 1] > vetor[j]){
				int aux = vetor[j - 1]; //Neste ponto efetua-se a TROCA
				vetor[j - 1] = vetor[j]; //Neste ponto efetua-se a TROCA
				vetor[j] = aux; //Neste ponto efetua-se a TROCA
			}
		}
	}//Aqui termina a classificação por Troca
	printf("\n !!!");
	printf("-------------------------------");
	//Vetor Classificação por Troca
	printf("-------------------------------");
	for(int i = 0; i < limite; i++){
		printf("\n vetor[%d] = %d", i, vetor[i]);
		
	}
	return 0;
}
