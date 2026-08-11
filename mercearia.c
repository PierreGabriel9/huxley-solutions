#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void desconto (int nprod, int nqtd, double nvalor);

int main() 
{
    double valor;
    int prod, qtd;
    scanf("%i %i", &prod, &qtd);

    if (prod == 1)
    {
        valor = 5.3 * qtd;
        desconto (prod, qtd, valor); 
    }
    else if (prod == 2)
    {
        valor = 6 * qtd;
        desconto (prod, qtd, valor); 
    }
    else if (prod == 3)
    {
        valor = 3.2 * qtd;
        desconto (prod, qtd, valor); 
    }
    else
    {
        valor = 2.5 * qtd;
        desconto (prod, qtd, valor); 
    }
	return 0;
}

void desconto (int nprod, int nqtd, double nvalor)
{
    if (nvalor >= 40 || nqtd >= 15)
            printf("R$ %.2lf\n", nvalor * 85/100);
        
        else
            printf("R$ %.2lf\n", nvalor); 
}