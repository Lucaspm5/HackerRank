#include <stdio.h>

int main(void)
{
    int tam;

    scanf("%d",&tam);

    int array[tam];
    int positivos = 0, negativos = 0, zero = 0;
    for(int i = 0; i < tam;i++)
    {
        scanf("%d",&array[i]);
        if(array[i] > 0)
            positivos++;

        if(array[i] < 0)
            negativos++;

        if(array[i] == 0)
            zero++;
    }

    printf("%.6f\n",(float) positivos/tam);
    printf("%.6f\n",(float) negativos/tam);
    printf("%.6f\n",(float) zero/tam);


    return 0;
}