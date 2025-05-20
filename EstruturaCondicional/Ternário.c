 #include <stdio.h>

int main(void){
	int valor, valor2;
	
	printf("Informe um VALOR numérico:");
	scanf("%d", &valor);
	
	if(valor < 0)
	valor2 = 0;
	else
	valor2 = valor;
	
	printf("\n Resolvido com estrutura de if");
	printf("\n valor de valor2 é: %d", valor2);
	printf("\n--------------------------------------------");
	
	valor2 = (valor < 0) ? 0 : valor; //Resolvido em uma única linha
	printf("\n Resolvido com Operador ternário ?");
	printf("\n valor de valor2 é: %d", valor2);
	printf("\n--------------------------------------------");
	
	return 0;
}
