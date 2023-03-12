#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int matriz[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;

    for (int i = 0; i < n; i++) {
        soma_diagonal_principal += matriz[i][i];
        soma_diagonal_secundaria += matriz[i][n-1-i];
    }

    int diferenca = abs(soma_diagonal_principal - soma_diagonal_secundaria);
    printf("%d\n", diferenca);

    return 0;
}