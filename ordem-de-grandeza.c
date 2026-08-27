#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contagem(double x)
{
    int contador = 0;
    if (x < 10 && x >= 1)
    {
        return contador;
    }
    else
    {
        contador++;
        return contador + contagem(x / 10);
    }
}

int main() 
{
    double n;
    int ordem;
    
    scanf("%lf", &n);
    
    ordem = contagem(n);
    
    printf("%d\n", ordem);
    
	return 0;
}