#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int estudante, idoso;
    scanf("%i %i", &estudante, &idoso);

    if (estudante == true || idoso == true)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

	return 0;
}