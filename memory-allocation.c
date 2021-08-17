#include<stdio.h>
#include<stdlib.h>

    // credits: jenishon, enomity hacking.

int main() {

    int n, i, *ptr, sum = 0;
    printf("Insira o número total de elementos: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Houve um Erro! Memória não alocada.");
        return 0;
    }

    printf("Insira os elementos da matriz: \n");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Os elementos são: \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}
