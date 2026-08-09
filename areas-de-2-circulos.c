#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double raio1, raio2;
    scanf("%lf", &raio1);
    scanf("%lf", &raio2);
    
    double area1, area2;
    area1 = raio1 * raio1 * 3.14;
    area2 = raio2 * raio2 * 3.14;
    
    if (area1 > area2)
    {
        printf("Primeiro circulo\n");
    }
    else if (area2 > area1)
    {
        printf("Segundo circulo\n");
    }
    else
    {
        printf("Iguais\n");
    }
	return 0;
}