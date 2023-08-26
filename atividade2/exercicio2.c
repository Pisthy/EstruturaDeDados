#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num[4];
    int maior;
    int menor;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite os numeros para saber quem eh maior e quem eh menor:");
        scanf("%d", &num[i]);
    }
    
    
    // Inicialização das variáveis maior e menor
    maior = num[0];
    menor = num[0];

    for (i = 0; i < 4; i++) {
        if (num[i] > maior) {
            maior = num[i];
        }
        if (num[i] < menor) {
            menor = num[i];
        }
    }

    printf("Esse eh o menor numero: %d", menor);
    printf("\nEsse eh o maior numero: %d", maior);

    return 0;
}
