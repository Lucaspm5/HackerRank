#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int max_and = 0, max_or = 0, max_xor = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            int a = i & j;
            int o = i | j;
            int x = i ^ j;
            if (a > max_and && a < k) max_and = a;
            if (o > max_or && o < k) max_or = o;
            if (x > max_xor && x < k) max_xor = x;
        }
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}