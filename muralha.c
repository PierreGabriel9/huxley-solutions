#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loop(int n, int moedas, int x, int y, int pos)
{
    if (n == 0)
    {
        return moedas;
    }
    else
    {
        char movimento;
        scanf(" %c", &movimento);

        if (y > x)
        {
            pos = 1; 
        }
        else if (x > y)
        {
            pos = 0;
        }

        if (movimento == 'C')
        {
            y++;
            if (y > x && pos == 0)
            {
                moedas++;
            }
        }
        else if (movimento == 'D')
        {
            x++;
            if (x > y && pos == 1)
            {
                moedas++;
            }
        }

        return loop(n - 1, moedas, x, y, pos);
    }
}

int main() 
{
    int n;
    int x = 0;
    int y = 0;
    int moedas = 0;
    int pos = 3;

    scanf("%d", &n);

    int total = loop(n, moedas, x, y, pos);

    printf("%d\n", total);

	return 0;
}