#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1;

    printf("Escolha um numero: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0) {
        printf("par");
    } else {
        printf("impar");
    }

}

