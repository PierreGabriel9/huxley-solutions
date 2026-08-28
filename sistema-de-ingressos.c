#include <stdio.h>

int main() 
{
    int dia, est, soc;
    double ingresso = 15;

    scanf("%d%d%d", &dia, &est, &soc);

    if (dia >= 1 && dia <= 4)
    {
        if (est == 1)
        {
            ingresso *= 0.70;
            printf("ESTUDANTE: R$ %.2lf\n", ingresso);
        }
        else if (soc == 1)
        {
            printf("SOCIO: R$ %.2lf", ingresso);
        }
        else
        {
            printf("COMUM: R$ %.2lf\n", ingresso);
        }
    }
    else
    {
        ingresso *= 2;
        if (est == 1)
        {
            ingresso *= 0.70;
            printf("ESTUDANTE: R$ %.2lf\n", ingresso);
        }
        else if (soc == 1)
        {
            ingresso *= 0.80;
            printf("SOCIO: R$ %.2lf\n", ingresso);
        }
        else
        {
            printf("COMUM: R$ %.2lf\n", ingresso);
        }
    }
    return 0;
}