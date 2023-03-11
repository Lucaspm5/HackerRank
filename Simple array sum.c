#include <stdio.h>

int main(void)
{
    int casos;
    int soma = 0;

    scanf("%d",&casos);

    int arr[casos];

    for(int i = 0;i < casos;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0;i < casos;i++)
    {
        soma += arr[i];
    }

    printf("%d\n",soma);

    return 0;
}