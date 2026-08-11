#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if (a <= b && a <=c)
    {
        printf("%i\n", a);
    }
    else if (b <= a && b <=c)
    {
        printf("%i\n", b);
    }
    else
    {
        printf("%i\n", c);
    }
	return 0;
}