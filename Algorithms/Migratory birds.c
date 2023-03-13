#include <stdio.h>
#include <stdlib.h>

int comparador(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int verificador(int size, int *arr) 
{
    qsort(arr, size, sizeof(int), comparador);

    int max_freq = 0;
    int freq = 1;
    int mode = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i-1]) {
            freq++;
        } else {
            if (freq > max_freq) {
                max_freq = freq;
                mode = arr[i-1];
            }
            freq = 1;
        }
    }

    if (freq > max_freq) {
        mode = arr[size-1];
    }

    return mode;
}

int main(void) {
    int size;

    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    int auxiliary = verificador(size, arr);

    printf("%d",auxiliary);
    return 0;
}