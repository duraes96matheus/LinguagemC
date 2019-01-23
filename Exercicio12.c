#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float hr, mm, sg;
	printf("Digite os segundos:  ");
	scanf("%f",&sg);
	mm=sg/60;
	printf("A quantidade de minutos eh:%.2f",mm);
	hr=mm/60;
	printf("\n");
	printf("A quantidade de horas eh:%.2f",hr);
	system("PAUSE");
	return 0;
}
