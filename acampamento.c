#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int h1, h2, h3, h4, h5;
    int contador = 1;
    scanf("%d%d%d%d%d", &h1, &h2, &h3, &h4, &h5);

    if (abs(h1 - h2) == 1 || abs(h1 - h3) == 1 || abs(h1 - h4) == 1 || abs(h1 - h5) == 1)
    {
        contador++;
    }
    else if (abs(h2 - h3) == 1 || abs(h2 - h4) == 1 || abs(h2 - h5) == 1)
    {
        contador++;
    }
    else if (abs(h3 - h4) == 1 || abs(h3 - h5) == 1)
    {
        contador++;
    }
    else if (abs(h4 - h5) == 1)
    {
        contador++;
    }

    printf("%d\n", contador);
	return 0;
}