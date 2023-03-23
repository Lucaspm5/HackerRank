#include <stdio.h>

#define MAX_ALUNOS 50
#define MAX_NOTAS 3
/////////////////////////////////////////////////////
void lerNotas(float notas[MAX_NOTAS]);
float calcularMedia(float notas[MAX_NOTAS]);
float calcularMediaGeral(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos);
int contarAprovados(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos);
int contarReprovados(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos);
void encontrarMaiorEMenorMedia(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos, float *maior, float *menor);
/////////////////////////////////////////////////////
int main()
{
    float notasAlunos[MAX_ALUNOS][MAX_NOTAS];
    int numAlunos = 0;
    int continuar;

    do {
        printf("\nDigite as notas do aluno %d:\n", numAlunos + 1);

        lerNotas(notasAlunos[numAlunos]);
        numAlunos++;

        printf("\nDeseja cadastrar as notas de mais algum aluno? (1-Sim, 0-Nao) ");
        scanf("%d", &continuar);
    } while (continuar == 1 && numAlunos < MAX_ALUNOS);

    printf("\nForam inseridas as notas de %d alunos.\n", numAlunos);

    float mediaGeral = calcularMediaGeral(notasAlunos, numAlunos);
    printf("A media geral das notas de todos os alunos e: %.2f\n", mediaGeral);

    int numAprovados = contarAprovados(notasAlunos, numAlunos);
    int numReprovados = contarReprovados(notasAlunos, numAlunos);

    printf("Quantidade de alunos aprovados: %d\n", numAprovados);
    printf("Quantidade de alunos reprovados: %d\n", numReprovados);

    float maiorMedia, menorMedia;

    encontrarMaiorEMenorMedia(notasAlunos, numAlunos, &maiorMedia, &menorMedia);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    return 0;
}
/////////////////////////////////////////////////////
void lerNotas(float notas[MAX_NOTAS])
{
    printf("Nota 1: ");
    scanf("%f", &notas[0]);

    printf("Nota 2: ");
    scanf("%f", &notas[1]);

    printf("Nota 3: ");
    scanf("%f", &notas[2]);
}
/////////////////////////////////////////////////////
float calcularMedia(float notas[MAX_NOTAS])
{
    float somaNotas = 0;

    for (int i = 0; i < MAX_NOTAS; i++)
	{
        somaNotas += notas[i];
    }

    return somaNotas / MAX_NOTAS;
}
/////////////////////////////////////////////////////
float calcularMediaGeral(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos)
{
    float somaNotas = 0;

    for (int i = 0; i < numAlunos; i++)
	{
        somaNotas += calcularMedia(notasAlunos[i]);
    }

    return somaNotas / numAlunos;
}
/////////////////////////////////////////////////////
int contarAprovados(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos)
{
    int count = 0;

    for (int i = 0; i < numAlunos; i++)
	{
        if (calcularMedia(notasAlunos[i]) >= 7.0)
		{
			count++;
		}
	}
	return count;
}
/////////////////////////////////////////////////////
int contarReprovados(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos)
{
	int count = 0;

	for (int i = 0; i < numAlunos; i++) {
		if (calcularMedia(notasAlunos[i]) < 7.0) {
			count++;
		}
	}

	return count;
}
/////////////////////////////////////////////////////
void encontrarMaiorEMenorMedia(float notasAlunos[MAX_ALUNOS][MAX_NOTAS], int numAlunos, float *maior, float *menor) {
	float maiorMedia = calcularMedia(notasAlunos[0]);
	float menorMedia = maiorMedia;

	for (int i = 1; i < numAlunos; i++) {
		float mediaAtual = calcularMedia(notasAlunos[i]);

		if (mediaAtual > maiorMedia) {
			maiorMedia = mediaAtual;
		}

		if (mediaAtual < menorMedia) {
			menorMedia = mediaAtual;
		}
	}

	*maior = maiorMedia;
	*menor = menorMedia;
}