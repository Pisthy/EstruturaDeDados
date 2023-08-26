#include <stdio.h>

#define NUM_NUMEROS 10 // Define o número de elementos no array

int main() {
    int contagens[NUM_NUMEROS] = {0}; // Inicializa todas as contagens em 0
    int numero;

    printf("Digite os números (ou -1 para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == -1) {
            break; // Encerra o loop quando -1 é digitado
        }

        if (numero >= 0 && numero < NUM_NUMEROS) {
            contagens[numero]++; // Incrementa a contagem do número selecionado
        } else {
            printf("Número fora do intervalo.\n");
        }
    }

    printf("Contagem dos números selecionados:\n");
    for (int i = 0; i < NUM_NUMEROS; i++) {
        printf("%d: %d vezes\n", i, contagens[i]);
    }

    return 0;
}

