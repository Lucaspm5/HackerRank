#include <stdio.h>

int birthday(int *s, int n, int d, int m) {
    int count = 0;
    for (int i = 0; i <= n - m; i++) {
        int sum = 0;
        for (int j = i; j < i + m; j++) {
            sum += s[j];
        }
        if (sum == d) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, d, m;
    scanf("%d", &n);

    int s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    scanf("%d %d", &d, &m);

    int result = birthday(s, n, d, m);
    printf("%d", result);

    return 0;
}