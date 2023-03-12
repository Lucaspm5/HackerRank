#include <stdio.h>

int main(void)
{
    int tam;

    scanf("%d", &tam);

    int arr[tam];

    for (int i = 0; i < tam; i++) {
        scanf("%d", &arr[i]);
    }

    long long int soma = 0;
    long long int max_val = arr[0];
    long long int min_val = arr[0];

    for (int i = 0; i < tam; i++) {
        soma += arr[i];
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("%lld %lld", soma - max_val, soma - min_val);

    return 0;
}





