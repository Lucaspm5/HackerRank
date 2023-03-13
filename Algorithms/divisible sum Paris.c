#include <stdio.h>

int main()
{
    int size, k;
    scanf("%d %d", &size, &k);

    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    int cont = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((arr[i] + arr[j]) % k == 0) {
                cont++;
            }
        }
    }
    
    printf("%d", cont);

    return 0;
}