#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[20];
    float nota = 0, soma = 0, media = 0;
    int i = 0;
    printf("nome: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = 0;
    fflush(stdin);

    for (i = 0; i < 3; i++)
    {
        printf("nota: ");
        scanf("%f", &nota);
        while (nota > 10)
        {
            printf("error\n");
            printf("nota: ");
            scanf("%f", &nota);
        }
        soma += nota;
    }
    media = soma / 3;
    if (media >= 7)
    {
        printf("aluno %s aprovado com média: %.2f", nome, media);
    }
    else
    {
        printf("aluno %s reprovado com média: %.2f", nome, media);
    }
    return 0;
}