#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    char nomeSalvo[20] = "nome";
    char senhaSalva[20] = "senha";

    char nome[20];
    char senha[20];

    printf("nome: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = 0;
    fflush(stdin);

    printf("senha: ");
    fgets(senha, 20, stdin);
    senha[strcspn(senha, "\n")] = 0;
    fflush(stdin);

    if (strcmp(nome, nomeSalvo) == 0 && strcmp(senha, senhaSalva) == 0)
    {
        printf("bem-vindo");
    }
    else
    {
        printf("acesso negado");
    }
    return 0;
}