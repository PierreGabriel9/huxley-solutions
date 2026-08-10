#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    double horas, valor, salario;

    scanf("%i %lf %lf", &number, &horas, &valor);

    salario = horas * valor;

    printf("NUMBER = %i\n", number);
    printf("SALARY = R$ %.2lf\n", salario);
	return 0;
}