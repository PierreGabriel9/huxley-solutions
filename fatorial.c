#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fat(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * fat(x - 1);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);

    int resultado = fat(n);
    printf("%d\n", resultado);
	return 0;
}