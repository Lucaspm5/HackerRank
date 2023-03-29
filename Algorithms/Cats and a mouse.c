#include <stdio.h>
#include <math.h>

int main(void)
{
    int casos;

    scanf("%d", &casos);

    int x, y, z;

    for(int i = 0; i < casos;i++){
        scanf("%d %d %d", &x, &y, &z);

        int distance = abs(x-z);
        int distence2 = abs(y-z);

        if(distance > distence2)
            printf("Cat B\n");

        if(distance < distence2)
            printf("Cat A\n");

        if(distance == distence2)
            printf("Mouse C\n");
    }


    return 0;
}
