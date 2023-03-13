#include <stdio.h>

int main() 
{
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if (v2 >= v1) 
    {
        printf("NO\n");
    }else{
        int dx = x2 - x1;
        int dv = v1 - v2;
        if (dx % dv == 0) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    
    return 0;
}
