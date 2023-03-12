#include <stdio.h>

int main(void)
{
    int casos;

    scanf("%d",&casos);

    for(int i = 0;i < casos;i++){
        for(int j = 0;j < casos - (1+i);j++){
            printf(" ");
        }
        for(int k = 0; k < i+1;k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
