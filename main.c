#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    srand(time(NULL));

    int matrizA[2][2];
    int matrizB[2][2];
    int matrizAB[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizA[i][j] = rand() % 7 + 1;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizB[i][j] = rand() % 7 + 1;
        }
    }

    printf("Matriz A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("|%d| ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("|%d| ", matrizB[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizAB[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }

    printf("Multiplicação das matrizes A e B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("|%d| ", matrizAB[i][j]);
        }
        printf("\n");
    }

    return 0;
}