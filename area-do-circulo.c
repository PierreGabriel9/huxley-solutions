#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double pi = 3.14159;
    double raio, area;
    scanf("%lf", &raio);
    area = (pi * raio * raio)/10000;
    printf("Area = %.4lf\n", area);
	return 0;
}