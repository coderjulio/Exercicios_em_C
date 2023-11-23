#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct livro{
    char nome[20];
    char autor[20];
    double review;
};

typedef struct livro livro;

int main()
{
    livro primeiro;
    livro segundo;
    livro terceiro;

    printf("----------Livro1---------------\n");
    printf("Qual o nome do livro? \n");
    fgets(primeiro.nome, 20, stdin);
    fflush(stdin);
    printf("Nome do autor \n");
    fgets(primeiro.autor, 20, stdin);
    printf("Qual sua nota para este livro? \n");
    scanf("%lf", &primeiro.review);
    getchar();

    printf("----------Livro2---------------\n");
    printf("Qual o nome do livro? \n");
    fgets(segundo.nome, 20, stdin);
    fflush(stdin);
    printf("Nome do autor \n");
    fgets(segundo.autor, 20, stdin);
    printf("Qual sua nota para este livro? \n");
    scanf("%lf", &segundo.review);
    getchar();

    printf("----------Livro3---------------\n");
    printf("Qual o nome do livro? \n");
    fgets(terceiro.nome, 20, stdin);
    fflush(stdin);
    printf("Nome do autor \n");
    fgets(terceiro.autor, 20, stdin);
    printf("Qual sua nota para este livro? \n");
    scanf("%lf", &terceiro.review);
    getchar();

    int av1 = (int)primeiro.review/2;
    int av2 = (int)segundo.review/2;
    int av3 = (int)terceiro.review/2;

    printf("Nome do Livro 1: %s", primeiro.nome);
    printf("Autor dde %s: %s",primeiro.nome, primeiro.autor);
    printf("Avaliacao: %d estrelas", av1);

    printf("Nome do Livro 1: %s", segundo.nome);
    printf("Autor de %s: %s", segundo.nome, segundo.autor);
    printf("Avaliacao: %d estrelas", av2);

    printf("Nome do Livro 1: %s", terceiro.nome);
    printf("Autor de %s: %s", terceiro.nome, terceiro.autor);
    printf("Avaliacao: %d estrelas", av3);

    printf("\nMedia das avaliacoes: %d estrelas", (av1+av2+av3)/3);

    return 0;
}
