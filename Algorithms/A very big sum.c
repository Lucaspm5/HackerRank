#include <stdio.h>

int main(void)
{
    int casos;
    long int soma = 0;

    scanf("%d",&casos);

    long int arr[casos];

    for(int i = 0;i < casos;i++)
    {
        scanf("%hd", &arr[i]);
    }

    for(int i = 0;i < casos;i++)
    {
        soma += arr[i];
    }

    printf("%hd\n",soma);

    return 0;
}