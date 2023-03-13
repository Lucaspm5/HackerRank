#include <stdio.h>

int main()
{
    int s, t, a, b, m, n, apple, orange, apples_fallen = 0, oranges_fallen = 0;

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++){
        scanf("%d", &apple);
        if (a + apple >= s && a + apple <= t){
            apples_fallen++;
        }
    }


    for (int i = 0; i < n; i++){
        scanf("%d", &orange);
        if (b + orange >= s && b + orange <= t){
            oranges_fallen++;
        }
    }

    printf("%d\n", apples_fallen);
    printf("%d\n", oranges_fallen);

    return 0;
}