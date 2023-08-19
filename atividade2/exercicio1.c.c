#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int v[4];
	int soma=0;
	for (i=0; i<4; i++){
			printf("Digite alguns numeros e saiba as posicoes deles:");
					scanf("%d", &v[i]);
					system("cls");
					soma=soma+v[i];
	}
	for (i=0; i<4; i++){
			printf("\n Esses foram os numeros digitados:%d\n", v[i]);
	}
	printf("\nEssa foi a soma dos elementos: %d", soma);


    return 0;
}
