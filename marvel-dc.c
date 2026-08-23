#include <stdio.h>

void verificacao_idade(int idade)
{
    if (idade >= 18)
    {
        printf("maior de idade\n");
    }
    else
    {
        printf("menor de idade\n");
    }
}

int main()
{
    int idade, preferencia;
    scanf("%d%d", &idade, &preferencia);

    if (preferencia == 1 || preferencia == 2)
    {
        verificacao_idade(idade);
        printf("valor do ingresso: R$ 20\n");
    }
    else
    {
        verificacao_idade(idade);
        printf("valor do ingresso: R$ 10\n");
    }
    return 0;
}