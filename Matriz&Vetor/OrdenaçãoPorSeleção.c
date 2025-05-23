#include <stdio.h>
int main(void){
	int vetor[5] = {76, 63, 46, 14, 02};
	int limite = 5;
	int exchange = 0;
	printf("\n *----------------------------------*");
	printf("\n Vetor original (antes da classificacao)");
	printf("\n *----------------------------------*");
	for(int i = 0; i<limite; i++){
		printf("\n vetor[%d] = %d", i, vetor[i]);
	}
	for(int i = 0; i < limite - 1; i++){ //Aqui começa a classificação
	exchange = 0;
	int c = i;
	int aux = vetor[i];
		for(int j = i + 1; j < limite; j++){
			if(vetor[j] < aux){
				c = j;
				aux = vetor[j];
				exchange = 1;
				
			}
		}
		if(exchange){
			vetor[c] = vetor[i];
			vetor[i] = aux;
		}
}
	printf("\n!!!"); 
	printf("\n *----------------------------------*");
	for(int i = 0; i < limite; i++){
		printf("\n vetor[%d] = %d", i, vetor[i]);
	}
	return 0;
}
