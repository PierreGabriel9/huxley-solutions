#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double salario, tarifa_fixo, p_km, kilometragem, fds;

    scanf("%lf%lf%lf%lf%lf", &salario, &tarifa_fixo, &p_km, &kilometragem, &fds);

    salario = salario * 0.3;
    double tarifa = (p_km * kilometragem) + tarifa_fixo;

    if (fds == 1)
    {
        tarifa *= 1.1;
    }
    
    if (salario >= tarifa)
    {
        printf("Vai poder viajar.\n");
        printf("%.2lf\n", tarifa);
        printf("%.2lf\n", salario - tarifa);
    }
    else
    {
        printf("Não vai poder viajar.\n");
        printf("%.2lf\n", tarifa - salario);
    }

	return 0;
}