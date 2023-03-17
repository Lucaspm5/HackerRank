#include <stdio.h>

int main()
{
    int entrada;
    scanf("%d",&entrada);
    
   for(int i = 1;i <= 10;i++)
   {
       printf("%d x %d = %d\n",entrada,i,entrada*i);
   }
    
    return 0;
}
