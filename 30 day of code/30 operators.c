#include <stdio.h>
#include <math.h>

int main(void)
{
    float a;
    int b, c;

    scanf("%f %d %d", &a, &b, &c);

    float tip = a * b / 100;
    float tax = a * c / 100;
    float total_cost = a + tip + tax;

    printf("%d\n", (int) roundf(total_cost));

    return 0;
}