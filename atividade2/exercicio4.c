#include <stdio.h>

#define NUM_NUMEROS 10 // Define o n�mero de elementos no array

int main() {
    int contagens[NUM_NUMEROS] = {0}; // Inicializa todas as contagens em 0
    int numero;

    printf("Digite os n�meros (ou -1 para encerrar):\n");

    while (1) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero == -1) {
            break; // Encerra o loop quando -1 � digitado
        }

        if (numero >= 0 && numero < NUM_NUMEROS) {
            contagens[numero]++; // Incrementa a contagem do n�mero selecionado
        } else {
            printf("N�mero fora do intervalo.\n");
        }
    }

    printf("Contagem dos n�meros selecionados:\n");
    for (int i = 0; i < NUM_NUMEROS; i++) {
        printf("%d: %d vezes\n", i, contagens[i]);
    }

    return 0;
}

