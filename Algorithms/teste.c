#include <stdio.h>

void classe(const char* name, const char* sname, long int idade, int score)
{
    char caracter;
    if(score >= 90 && score <= 100)
        caracter = 'O';
    else if(score >= 80 && score < 90)
        caracter = 'A';
    else if(score >= 70 && score < 80)
        caracter = 'B';
    else if(score >= 60 && score < 70)
        caracter = 'C';
    else if(score >= 50 && score < 60)
        caracter = 'D';
    else
        caracter = 'F';

    printf("Name: %s, %s\nID: %ld\nGRADE: %c\n", sname, name, idade, caracter);
}

int main(void)
{
    int score1, score2, numbertest;
    char name[10000], sname[10000];
    long int number;

    scanf("%s %s %ld", name, sname, &number);
    scanf("%d",&numbertest);
    scanf("%d %d", &score1, &score2);

    int scoretotal = (int)(score1 + score2)/2;

    classe(name, sname, number, scoretotal);

    return 0;
}