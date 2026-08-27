#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int b, m, v, e;
    char c;

    scanf("%d%d%d", &b, &m, &v);
    scanf(" %c%d", &c, &e);

    int total = b + m + v;

    if (e < 1 || e > total)
    {
        printf("You pensa que me engana, vou te mostrar a glocada de 30!\n");
        return 0;
    }

    if (c == 'B' && (total - e) % 7 == 0)
    {
        printf("Parabens pobre, ganhou uma box of good good\n");
        return 0;
    }
    else if (c == 'B')
    {
        printf("Not my problema\n");
        return 0;
    }

    if (c == 'M' && (total - e) % 3 == 0 && (total - e) % 2 != 0 || c == 'M' && (total - e) % 8 == 0)
    {
        printf("Acui, uma box of good good for you, alright?\n");
        return 0;
    }
    else if (c == 'M')
    {
        printf("Deixei sua box of good good la em Xique-Xique Bahia");
        return 0;
    }

    if (c == 'V' && (total - e) % 2 != 0 || c == 'V' && (total - e) % 5 == 0)
    {
        printf("HEEHEE, good good for you\n");
        return 0;
    }
    else if (c == 'V')
    {
        printf("Sem good good for you, alright?\n");
        return 0;
    }

    printf("Ta querendo enganar quem, POBRE?!\n");

	return 0;
}