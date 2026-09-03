#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void primo(int num, int i, int raiz)
{
    if (i > raiz)
    {
        printf("1\n");
    }

    else if (num % i == 0)
    {
        printf("0\n");
    }

    else
    {
        i++;
        primo(num, i, raiz);
    }
}

void loop ()
{
    int x;
    scanf("%d", &x);

    if (x == -1)
    {
        return;
    }
    else if (x <= 1)
    {
        printf("0\n");
        loop();
    }
    else
    {
        int i = 2;
        int raiz = sqrt(x);
        primo(x, i, raiz);
        loop();
    }
}

int main() 
{
    loop();

	return 0;
}