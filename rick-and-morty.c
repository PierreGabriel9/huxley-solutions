#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int serie (int num, int pos, int i)
{
    if ((i - 1) == pos)
    {
        return num;
    }
    
    if (i % 2 == 1)
    {
        i++;
        return serie(num + 3, pos, i);
    }
    else
    {
        i++;
        int resto = num % 5;
        return serie(num + resto, pos, i);
    }
}

int main() 
{
    int n, pos;

    scanf("%d%d", &n, &pos);

    int i = 1;
    int resultado = serie(n, pos, i);

    printf("%d\n", resultado);

	return 0;
}