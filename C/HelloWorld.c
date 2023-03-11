#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    char str[100];

    scanf("%[^\n]", str);

    printf("%s\n", str);

    return 0;
}