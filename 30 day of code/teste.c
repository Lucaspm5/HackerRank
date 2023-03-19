#include <stdio.h>

int main(void)
{
    int casos;

    scanf("%d",&casos);

    int arr[casos];

    for(int i = 0;i < casos;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = casos-1;i >= 0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}