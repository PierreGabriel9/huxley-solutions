#include <stdio.h>

void caso_par(int x)
{
    int dobro = x * 2;
    int metade = x / 2;

    printf("O número é par\n");
    printf("O dobro do número digitado é %d\n", dobro);
    printf("A metade do número digitado é %d\n", metade);
}

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        caso_par(n);
    }
    else
    {
        printf("O número é ímpar\n");
    }
    return 0;
}