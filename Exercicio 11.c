#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float rb, al, areatotal;
	
	printf("Bem Vindo");		
	printf("\n");
	printf("Digite a medida do raio da base");
	scanf("%f",&rb);
	printf("Digite a altura do cilindro");
	scanf("%f",&al);
    areatotal=3.14*pow(rb,2)*al;
    printf("A area total do cilindro e:%.2f",areatotal);
    system("PAUSE");
    
		
	return 0;
}
