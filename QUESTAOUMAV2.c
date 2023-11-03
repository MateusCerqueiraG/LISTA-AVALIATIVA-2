#include <stdio.h>

int main() {
    int numeros[10];
    int soma[9];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 9; i++) {
        soma[i] = numeros[i] + numeros[i + 1];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", numeros[i]);
        if (i != 9) {
            printf(" ");
        }
    }

    printf("\n");
    for (int i = 0; i < 9; i++) {
        printf("%d", soma[i]);
        if (i != 8) {
            printf(" ");
        }
    }

    int soma2[8];
    for (int i = 0; i < 8; i++) {
        soma2[i] = soma[i] + soma[i + 1];
    }
    
    int soma3[8];
    for (int i = 0; i < 7; i++) {
        soma3[i] = soma2[i] + soma2[i + 1];
    }
    
    int soma4[8];
    for (int i = 0; i < 6; i++) {
        soma4[i] = soma3[i] + soma3[i + 1];
    }
    
    int soma5[8];
    for (int i = 0; i < 5; i++) {
        soma5[i] = soma4[i] + soma4[i + 1];
    }
    
    int soma6[8];
    for (int i = 0; i < 4; i++) {
        soma6[i] = soma5[i] + soma5[i + 1];
    }

    int soma7[8];
    for (int i = 0; i < 3; i++) {
        soma7[i] = soma6[i] + soma6[i + 1];
    }
    
    int soma8[8];
    for (int i = 0; i < 2; i++) {
        soma8[i] = soma7[i] + soma7[i + 1];
    }
    
    int soma9[8];
    for (int i = 0; i < 1; i++) {
        soma9[i] = soma8[i] + soma8[i + 1];
    }

    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("%d", soma2[i]);
        if (i != 7) {
            printf(" ");
        }
    }

    printf("\n");
    for (int i = 0; i < 7; i++) {
        printf("%d", soma3[i]);
        if (i != 6) {
            printf(" ");
        }
    }
    
    printf("\n");
    for (int i = 0; i < 6; i++) {
        printf("%d", soma4[i]);
        if (i != 5) {
            printf(" ");
        }
    }
    
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", soma5[i]);
        if (i != 4) {
            printf(" ");
        }
    }
    
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%d", soma6[i]);
        if (i != 3) {
            printf(" ");
        }
    }
    
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d", soma7[i]);
        if (i != 2) {
            printf(" ");
        }
    }
    
    printf("\n");
    for (int i = 0; i < 2; i++) {
        printf("%d", soma8[i]);
        if (i != 1) {
            printf(" ");
        }
    }
    
    printf("\n");
    for (int i = 0; i < 1; i++) {
        printf("%d\n", soma9[i]);
    }

    return 0;
}