#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Faça um algoritmo para calcular o volume de uma esfera de raio R,
	// em que R é um valor fornecido pelo usuário.

    float raio,volume;
		
	printf("Digite o raio da esfera: ");
	scanf("%f",&raio);
	volume= 4 * 3.14 *pow(raio,3) /3;
	printf("O volume total do cilindro eh:%.2f",volume);	
	return 0;
}
