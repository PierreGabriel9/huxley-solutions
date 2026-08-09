#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double A, B, C;
    double PI = 3.14159;
    
    scanf("%lf" "%lf" "%lf", &A, &B, &C);
    
    double tri = (A * C) / 2;
    double cir = PI * C * C;
    double trp = (A + B) * C / 2;
    double qua = B * B;
    double ret = A * B;
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trp);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ret);
    
	return 0;
}