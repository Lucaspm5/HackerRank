#include <stdio.h>

int main()
{
    int num, sum = 0;

    scanf("%d", &num);

    for (int i = 0; i < 5; i++)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("%d\n", sum);

    return 0;
}