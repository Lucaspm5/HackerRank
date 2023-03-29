#include <stdio.h>
#include <string.h>

long auxiliary(char *s, long long n)
{
    int len = strlen(s);
    long long count_a = 0;

    for (int i = 0; i < len; i++){
        if (s[i] == 'a'){
            count_a++;
        }
    }

    long repeats = n/len;
    count_a *= repeats;

    int remainder = n % len;

    for (int i = 0; i < remainder; i++){
        if (s[i] == 'a'){
            count_a++;
        }
    }

    return count_a;
}

int main()
{
    char s[101];
    long long n;

    scanf("%s %ld", s, &n);

    long long result = auxiliary(s, n);

    printf("%ld\n", result);

    return 0;
}
