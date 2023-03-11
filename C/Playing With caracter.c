#include <stdio.h>

#define MAX_LEN 100

int main() {
    char ch;
    char str[MAX_LEN];
    char sentence[MAX_LEN];

    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%s", str);
    printf("%s\n", str);

    scanf(" %[^\n]%*c", sentence);
    printf("%s\n", sentence);

    return 0;
}