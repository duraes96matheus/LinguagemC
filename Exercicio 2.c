#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[] ){

float b, a, resultado;

printf("Digite o tamanho da base:  ");
scanf("%f",&b);
printf("Digite a altura:  ");
scanf("%f",&a);
resultado=b*a;
printf("O tamanho total e:%.1f",resultado);
return 0;
}
