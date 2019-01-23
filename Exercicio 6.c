#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int anon, anoa, idadea, idade2050;
		
    printf("Digite o ano de nascimento:  ");
	scanf("%d",&anon);
	printf("Digite o ano atual:  ");
	scanf("%d",&anoa);
	idadea= anoa - anon;
	printf("\n");
	printf("A idade atual e:%d",idadea);
	printf("\n");
	idade2050= 2050 - anon;
	printf("\n");
	printf("A idade em 2050 sera:%d",idade2050);
	return 0;
	}
