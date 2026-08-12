#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double a, b, c, delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta < 0)
    {
        printf("NRR\n");
    }
    else if (a == 0)
    {
        printf("NEESG\n");
    }
    else
    {
        printf("%.2lf\n%.2lf\n", x1, x2);
    }

	return 0;
}