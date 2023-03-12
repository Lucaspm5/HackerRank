#include <stdio.h>

int arredondar_nota(int nota) {
    if (nota < 38) {
        return nota;
    } else {
        int proximo_mult_5 = ((nota / 5) + 1) * 5;
        if (proximo_mult_5 - nota < 3) {
            return proximo_mult_5;
        } else {
            return nota;
        }
    }
}

int* avaliar_alunos(int n, int* notas) {
    int* notas_arredondadas = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        notas_arredondadas[i] = arredondar_nota(notas[i]);
    }
    return notas_arredondadas;
}

int main() {
    int n;
    scanf("%d", &n);

    int* notas = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &notas[i]);
    }

    int* notas_arredondadas = avaliar_alunos(n, notas);

    for (int i = 0; i < n; i++) {
        printf("%d\n", notas_arredondadas[i]);
    }

    free(notas);
    free(notas_arredondadas);
    return 0;
}