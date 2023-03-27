#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int scores[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &scores[i]);
    }

    int max_score = scores[0];
    int max_count = 0;

    for (int i = 1; i < n; i++){
        if (scores[i] > max_score){
            max_score = scores[i];
            max_count++;
        }
    }

    int min_score = scores[0];
    int min_count = 0;

    for(int i = 1; i < n;i++)
    {
        if(scores[i] < min_score){
            min_score = scores[i];
            min_count++;
        }
    }

    printf("%d %d\n", max_count,min_count);

    return 0;
}
