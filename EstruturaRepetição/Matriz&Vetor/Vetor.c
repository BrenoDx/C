#include <stdio.h>
int main(void){
	float notas[4] = {4.5, 5.0, 4.0, 6.0};
	float soma = 0;
	for(int i =0; i <4; i++){
		soma = soma + notas[i];
	}
	printf("\n A média das notas é: %.2f", (soma/4));
	return 0;
}
