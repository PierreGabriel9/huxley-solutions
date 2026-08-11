#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int lado1, lado2, lado3;
    scanf("%i %i %i", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("equilatero\n");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("isosceles\n");
    }
    else
    {
        printf("escaleno\n");
    }
	return 0;
}