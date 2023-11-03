#include <stdio.h>
#include <string.h>

#define NUM_JOGADORES 11

typedef struct {
    char nome[31];
    char posicao;
    int forca;
} Jogador;

float calcularForcaPonderada(Jogador jogadores[]) {
    float forca = 0;

    for (int i = 0; i < NUM_JOGADORES; i++) {
        switch (jogadores[i].posicao) {
            case 'G':
                forca += 8 * jogadores[i].forca;
                break;
            case 'L':
                forca += 10 * jogadores[i].forca;
                break;
            case 'Z':
                forca += 5 * jogadores[i].forca;
                break;
            case 'V':
                forca += 8 * jogadores[i].forca;
                break;
            case 'M':
                forca += 11 * jogadores[i].forca;
                break;
            case 'A':
                forca += 12 * jogadores[i].forca;
                break;
        }
    }

    return forca / 100;
}

int main() {
    char nomeTime1[31], nomeTime2[31];
    Jogador time1[NUM_JOGADORES], time2[NUM_JOGADORES];

    scanf(" %[^\n]", nomeTime1);
    for (int i = 0; i < NUM_JOGADORES; i++) {
        scanf(" %[^;]; %c; %d", time1[i].nome, &time1[i].posicao, &time1[i].forca);
    }

    scanf(" %[^\n]", nomeTime2);
    for (int i = 0; i < NUM_JOGADORES; i++) {
        scanf(" %[^;]; %c; %d", time2[i].nome, &time2[i].posicao, &time2[i].forca);
    }

    float forcaTime1 = calcularForcaPonderada(time1);
    float forcaTime2 = calcularForcaPonderada(time2);

    printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
    printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);

    if (forcaTime1 > forcaTime2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaTime2 > forcaTime1) {
        printf("%s eh mais forte\n", nomeTime2);
    }

    return 0;
}