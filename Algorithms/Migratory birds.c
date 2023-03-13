#include <stdio.h>

int verificador(int size, int *arr)
{
    int max_freq = 0;
    int mode = 0;

    for(int i = 0;i < size;i++)
    {
        int freq = 0;
        for(int j = i + 1;j < size;j++)
        {
            if(arr[j] == arr[i])
            {
                freq++;
            }
        }
        if(freq > max_freq)
        {
            max_freq = freq;
            mode = arr[i];
        }
    }

    return mode;
}

int main(void)
{
    int size;

    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i < size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int auxiliary = verificador(size, arr);

    printf("%d",auxiliary);
    return 0;
}
