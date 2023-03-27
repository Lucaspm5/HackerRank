#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cores[101] = {0};
    for (int i = 0; i < n; i++) {
        int cor;
        scanf("%d", &cor);
        cores[cor]++;
    }

    int pares = 0;
    for (int i = 1; i <= 100; i++) {
        pares += cores[i] / 2;
    }

    printf("%d\n", pares);

    return 0;
}
