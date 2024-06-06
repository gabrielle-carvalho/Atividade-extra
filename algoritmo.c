#include <stdio.h>

int main() {
    int count = 5;
    int numImpar[count]; //n° de elementos que ele pode armazenar é determinado pelo valor de count

    printf("Digite 5 números ímpares:\n");
    for (int i = 0; i < count; i++) {
        do {
            scanf("%d", &numImpar[i]);
            if (numImpar[i] % 2 == 0)
                printf("Número inválido. Digite um número ímpar:\n");
        } while (numImpar[i] % 2 == 0);
    }

    for (int i = 0; i < count; i++) {
        gerarQuadradoMagico(numImpar[i]);
    }

    return 0;
}

void gerarQuadradoMagico(int n) {
    int quadradoMagico[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            quadradoMagico[i][j] = 0;

    int i = 0;
    int j = n / 2; //Posições iniciais

    for (int num = 1; num <= n * n; ) {
        // Coloca o número atual
        quadradoMagico[i][j] = num++;

        // Calcula a nova posição
        int newi = (i - 1 + n) % n;
        int newj = (j - 1 + n) % n;

        // Se a nova posição estiver ocupada, desce uma linha e mantem coluna
        if (quadradoMagico[newi][newj] != 0) {
            newi = (i + 1) % n;
            newj = j;
        }

        i = newi;
        j = newj;
    }

    // Imprime o quadrado mágico
    printf("Quadrado mágico de ordem %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", quadradoMagico[i][j]);
        printf("\n");
    }
    printf("\n");
}
