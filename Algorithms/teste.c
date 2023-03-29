#include <stdio.h>

#define MAX_ALUNOS 50

typedef struct
{
    float notas[3];
    float media;
}Aluno;

Aluno alunos[MAX_ALUNOS];
int numAlunos = 0;

void lerNotas(Aluno *aluno);
float calcularMediaGeral();
int contarAprovados();
int contarReprovados();
void encontrarMaiorEMenorMedia(float *maior, float *menor);
/////////////////////////////////
void lerNotas(Aluno *aluno) {
    printf("Nota 1: ");
    scanf("%f", &aluno->notas[0]);

    printf("Nota 2: ");
    scanf("%f", &aluno->notas[1]);

    printf("Nota 3: ");
    scanf("%f", &aluno->notas[2]);

    aluno->media = (aluno->notas[0] + aluno->notas[1] + aluno->notas[2]) / 3;
}
/////////////////////////////////
float calcularMediaGeral() {
    float somaNotas = 0;

    for (int i = 0; i < numAlunos; i++) {
        somaNotas += alunos[i].media;
    }

    return somaNotas / numAlunos;
}
/////////////////////////////////
int contarAprovados() {
    int count = 0;

    for (int i = 0; i < numAlunos; i++) {
        if (alunos[i].media >= 7) {
            count++;
        }
    }

    return count;
}
/////////////////////////////////
int contarReprovados() {
    int count = 0;

    for (int i = 0; i < numAlunos; i++) {
        if (alunos[i].media < 7) {
            count++;
        }
    }

    return count;
}
/////////////////////////////////
void encontrarMaiorEMenorMedia(float *maior, float *menor) {
    *maior = alunos[0].media;
    *menor = alunos[0].media;

    for (int i = 1; i < numAlunos; i++) {
        if (alunos[i].media > *maior) {
            *maior = alunos[i].media;
        }

        if (alunos[i].media < *menor) {
            *menor = alunos[i].media;
        }
    }
}
/////////////////////////////////
int main()
{
    int continuar;

    do {
        printf("\nDigite as notas do aluno %d:\n", numAlunos + 1);

        lerNotas(&alunos[numAlunos]);
        numAlunos++;

        printf("\nDeseja cadastrar as notas de mais algum aluno? (1-Sim, 0-Nao) ");
        scanf("%d", &continuar);
    } while (continuar == 1 && numAlunos < MAX_ALUNOS);

    printf("\nForam inseridas as notas de %d alunos.\n", numAlunos);

    float mediaGeral = calcularMediaGeral();
    printf("A media geral das notas de todos os alunos e: %.2f\n", mediaGeral);

    int numAprovados = contarAprovados();
    int numReprovados = contarReprovados();
    printf("Quantidade de alunos aprovados: %d\n", numAprovados);
    printf("Quantidade de alunos reprovados: %d\n", numReprovados);

    float maiorMedia, menorMedia;

    encontrarMaiorEMenorMedia(&maiorMedia, &menorMedia);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    return 0;
}