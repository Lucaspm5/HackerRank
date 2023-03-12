#include <stdio.h>
#include <stdlib.h>

int birthdayCakeCandles(int candles_count, int* candles) {
    int max_height = 0;
    int count = 0;

    
    for (int i = 0; i < candles_count; i++) {
        if (candles[i] > max_height) {
            max_height = candles[i];
        }
    }

    
    for (int i = 0; i < candles_count; i++) {
        if (candles[i] == max_height) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int* candles = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);
    }

    int result = birthdayCakeCandles(n, candles);
    printf("%d", result);

    free(candles);
    return 0;
}