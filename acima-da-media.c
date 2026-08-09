#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double num1, num2, num3;
    int qtd;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);
    
    double media = (num1 + num2 + num3) / 3;
    
    if (num1 > media)
    {
        qtd++;
    }
    if (num2 > media)
    {
        qtd++;
    }
    if (num3 > media)
    {
        qtd++;
    }
    
    printf("%d\n", qtd);
	return 0;
}