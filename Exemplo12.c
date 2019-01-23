#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float b,a,c,x1,x2, delta;
    
	//leitura de termos 
		
	printf("Digite o valor A");
		printf("\n");
	scanf("%f", &a);
	printf("Digite o valor b");
		printf("\n");
	scanf("%f", &a);
	printf("Digite o valor c");
		printf("\n");
	scanf("%f", &a);
	
	// calcular valores
	delta = b*b-4*a*c;
	x1 = (-b + sqrt(delta)) / (2*a);
	
	x2 = (-b - sqrt(delta))/ (2*a);
	
	//expondo resultados
	printf("O valor de x1: %.2fn", x1);
		printf("\n");
 	printf("O valor de x2: %.2fn", x2);
    
 	
 	system("PAUSE");
	return 0;
}
