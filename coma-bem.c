#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double valor, total;
    
    scanf("%lf", &valor);
    total = valor * 1.1;

    printf("%.2lf\n", total);
	return 0;
}