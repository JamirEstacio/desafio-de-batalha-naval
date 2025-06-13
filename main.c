#include <stdio.h>
#include <string.h>

// Dimensões do tabuleiro
#define TAM 10
#define TAM_NAVIO 3

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("  ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 0)
                printf("~ ");
            else if (tabuleiro[i][j] == 3)
                printf("N ");
            else
                printf("? ");
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // Definição das posições iniciais dos navios
    int linhaH = 2, colunaH = 2; // horizontal
    int linhaV = 5, colunaV = 7; // vertical

    // Verificar se as posições são válidas
    if (colunaH + TAM_NAVIO <= TAM && linhaV + TAM_NAVIO <= TAM) {
        // Posicionar navio horizontal
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linhaH][colunaH + i] = 3;
        }

        // Posicionar navio vertical
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linhaV + i][colunaV] = 3;
        }

        printf("Tabuleiro com navios posicionados:\n");
        imprimirTabuleiro(tabuleiro);
    } else {
        printf("Erro: posições inválidas para os navios.\n");
    }

    return 0;
}
