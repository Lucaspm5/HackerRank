#include <stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);
    int binary[32];
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    int max_count = 0;
    int count = 0;
    for (int j = i - 1; j >= 0; j--) {
        if (binary[j] == 1) {
            count++;
            max_count = (count > max_count) ? count : max_count;
        } else {
            count = 0;
        }
    }
    printf("%d\n", max_count);
    return 0;
}
