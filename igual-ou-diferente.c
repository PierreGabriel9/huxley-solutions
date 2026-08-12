#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    if (a == b && a == c)
    {
        printf("1\n");
    }
    else if (a != c && a != b && b != c)
    {
        printf("2\n");
    }
    else
    {
        printf("3\n");
    }

	return 0;
}