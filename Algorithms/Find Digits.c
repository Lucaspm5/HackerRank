#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long int status, N, casos, flag;
    int count = 0;

    status = scanf("%lld",&casos);

    if(status != 1)
    {
        printf("Error!\n");
        exit(1);
    }
    else{
        while(casos--)
        {
            scanf("%lld",&N);

            flag = N;

            while(flag > 0)
            {
                if(flag % 10 == 0)
                {
                    flag /= 10;
                    continue;
                }

                if(N % (flag % 10) == 0)
                    count++;

                flag /= 10;
            }
            printf("%d\n",count);

            count = 0;
        }
    }
    return 0;
}
