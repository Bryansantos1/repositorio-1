#include <stdio.h>

#define N 100

int main() {
    int n[N];
    int qt;

    //printf("Digite a quantidade de n�meros(max %d): ", N);
    scanf("%d", &qt);

    for (int i = 0; i < qt; i++) {
        //printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("Pares .:");
    for (int i = 0; i < qt; i++) {
        if (n[i] % 2 == 0) {
            printf(" %d", n[i]);
        }
    }
    printf("\n");

    printf("Impares:");
    for (int i = 0; i < qt; i++) {
        if (n[i] % 2 != 0) {
            printf(" %d", n[i]);
        }
    }


    return 0;
}
