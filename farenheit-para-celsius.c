#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double far, cel;

    scanf("%lf", &far);
    cel = (5 * (far - 32))/9;

    printf("%.2lf\n", cel);
	return 0;
}