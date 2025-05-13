#include <stdio.h>
#include <stdbool.h>

int main(void){
	bool cond1, cond2;
	cond1 = true; // cond1 seja vdd
	cond2 = false; // cond2 seja falso
	
	if(cond1) // condção 1 VERDADEIRO
	{
		if(cond2) // condição 2 falso
		{
			printf("Valor de cond1 = %d (BLOCO-2-2)\n", cond1); //bloco-2-2
			printf("Valor de cond2 = %d (BLOCO-2-2)\n", cond2);
		}
		else // falso da condição 2
		{
			printf("Valor de cond1 = %d (BLOCO-2-1)\n", cond1);//bloco-2-1
			printf("Valor de cond2 = %d (BLOCO-2-1)\n", cond2);
		}//ponto de encontro bloco2
	}else //falso da condição 1
	{
		printf("Valor de cond1 = %d (BLOCO-1)\n", cond1); // bloco 1
	}// ponto de encontro bloco 1
	
	printf("Valor de cond1 = %d (BLOCO-3)\n", cond1); //bloco 3
	printf("Valor de cond2 = %d (BLOCO-3)\n", cond2);
	return 0;

}
