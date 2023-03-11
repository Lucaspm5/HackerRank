#include <stdio.h>

int main()
{
    int a[3], b[3], alice = 0, bob = 0;

    for (int i = 0; i < 6; i++){
        if (i < 3){
            scanf("%d", &a[i]);
        }else{
            scanf("%d", &b[i - 3]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
        {
            alice++;
        }
        else if(a[i] < b[i])
        {
            bob++;
        }
    }

    printf("%d %d\n", alice, bob);

    return 0;
}