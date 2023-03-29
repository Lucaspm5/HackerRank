#include <stdio.h>

int main(int argc, char **argv)
{
    int casos, altura, N;

    scanf("%d", &casos);

    while(casos--)
    {
        altura = 1;

        scanf("%d",&N);

        for(int i = 1;i <= N;i++)
        {
            if(i % 2 == 1)
            {
                altura *= 2;
            }else{
                altura += 1;
            }
        }
        printf("%d\n",altura);
    }
    return 0;
}
