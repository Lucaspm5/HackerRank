#include<stdio.h>

int main(void)
{
    int x1,x2,v1,v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if(x2 + v2 == x1 + v1)
    {
        if(x2 > x1 && v2 > v1)
        {
            printf("NO\n");
        }else if(x2 > x1 && v2 < v1|| x2 < x1 && v2 > v1)
        {
            printf("YES\n");
        }
    }else if(x2 = v2 != x1 + v1)
    {
        printf("NO\n");
    }
    return 0;
}