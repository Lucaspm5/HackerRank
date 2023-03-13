#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    char s1[100];
    
    scanf("%d", &i);
    scanf("%lf", &d);
    scanf(" %[^\n]", s1);

    printf("%d\n", i + 4);
    printf("%.1lf\n", d + 4.0);
    printf("HackerRank %s\n", s1);

    return 0;
}
