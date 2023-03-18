#include <stdio.h>
#include <string.h>

int main(void)
{
    int casos;

    scanf("%d",&casos);

    char str[50];
    char array[50], array2[50];

    while(casos--)
    {
        scanf("%s",str);

        int cont = 0, cont2 = 0;

        for(int i = 0; i < strlen(str);i++)
        {
            if(i % 2 == 0)
                array[cont++] = str[i];
            else
                array2[cont2++] = str[i];
        }

        array[cont] = '\0';
        array2[cont2] = '\0';

        printf("%s %s\n",array,array2);
    }

    return 0;
}
