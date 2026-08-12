#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    if (a - b == 0 || a - c == 0 || (a + b) - c == 0 || (b + c) - a == 0 || (c + a) - b == 0 || a - b - c == 0)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

	return 0;
}