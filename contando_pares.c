#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ContaDigitosPares(int x, int i);

int main() 
{
    int n, qtd;
    int i = 0;

    scanf("%d", &n);
    qtd = ContaDigitosPares(n, i);
    
    printf("%d\n", qtd);

	return 0;
}

int ContaDigitosPares(int x, int i)
{
    if (x == 0)
    {
        return i;
    }
    else 
    {
        if (x % 2 == 0)
        {
            i++;
            return ContaDigitosPares(x / 10.0, i);
        }
        else
        {
            return ContaDigitosPares(x / 10.0, i);
        }
    }
}