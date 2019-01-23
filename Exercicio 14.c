#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio,altura,volume;
	
	printf("Digite o tamanho do raio da lata:  ");
	scanf("%f",&raio);
	printf("Digite o tamanho da altura:  ");
	scanf("%f",&altura);
	volume= raio*altura;
	printf("O volume da lata e:%.2f", volume);
	system("PAUSE");
	return 0;
}
