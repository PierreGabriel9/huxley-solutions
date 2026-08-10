#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int number;
    scanf("%i", &number);
    for (int i = 1; i < 10; i++)
    {
        printf("%i X %i = %i\n", number, i, number * i);
    }
	return 0;
}