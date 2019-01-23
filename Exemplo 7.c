#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float no1,no2,no3,no4,nof;
	char na[20];
	printf("Bem Vindo ao calculador de notas");
	printf("\n");
	printf("Digite o nome do aluno:  ");
	scanf("%s", &na);
    printf("\n");
	printf("Digite a nota do 1 Bimestre:  ");
	scanf("%f",&no1);
	printf("Digite a nota do 2 Bimestre:  ");
	scanf("%f",&no2);
	printf("Digite a nota do 3 Bimestre:  ");
	scanf("%f",&no3);
	printf("Digite a nota do 4 Bimestre:  ");
	scanf("%f",&no4);
	nof= (no1+no2+no3+no4) /4;	
	printf("A nota final do aluno:%c",na);
	printf("\n");
	printf("eh:%.1f",nof);
	
	return 0;}
