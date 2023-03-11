#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int estudantes, char genero)
{
    int soma = 0;
    int aux;

    if(genero == 'b')
    {
        aux = 0;
    }else{
        aux = 1;
    }

    for(int i = aux; i < estudantes; i += 2)
    {
        soma += marks[i];
    }

    return soma;
}

int main()
{
    int estudantes;
    char genero;
    int soma;

    scanf("%d", &estudantes);
    int *marks = (int *) malloc(estudantes * sizeof (int));

    for (int student = 0; student < estudantes; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &genero);
    soma = marks_summation(marks, estudantes, genero);
    printf("%d", soma);
    free(marks);

    return 0;
}