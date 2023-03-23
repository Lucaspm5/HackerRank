#include <stdio.h>

#define tam 6
#define tam 6

int main()
{
    int arr[tam][tam];
    int limite = -1;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < (tam-2); i++){
        for(int j = 0; j < (tam-2); j++){
            int auxiliary =       arr[i][j]
                                + arr[i][j+1]
                                + arr[i][j+2]
                                + arr[i+1][j+1]
                                + arr[i+2][j]
                                + arr[i+2][j+1]
                                + arr[i+2][j+2];


            if(auxiliary > limite)
                limite = auxiliary;
        }
    }

    printf("%d\n", limite);

    return 0;
}
