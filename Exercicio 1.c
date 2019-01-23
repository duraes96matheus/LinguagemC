#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num_1, num_2, resultado;
	
	printf("digite um numero inteiro:  ");
	scanf("%d",&num_1);
	printf("digite um numero inteiro:  ");
	scanf("%d",&num_2);
	resultado= num_1 + num_2;
	printf("resultado e:%d",resultado);
	
	return 0;}
