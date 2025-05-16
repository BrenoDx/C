#include <stdio.h>

int main(){
	float temperatura[3][4] = {{25.4, 27.09, 28.90, 29.50}, {20.05, 20.90, 21.8, 22.90}, {17.70, 18.80, 19.0, 20.10}};
	for(int i = 0; i< 3; i++){
		printf("\n*-------------------Temperatura do Mes: %d--------------*", i +1);
		for(int j = 0; j<4; j++){
			printf("\nTemperatura %d = %.2f ", j+1, temperatura[i][j]);
		}
	}
	return 0;
}
