#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void resultado(double t1, double t2, double d, double vf, double vg, double milhas)
{
    scanf("%lf%lf%lf", &d, &vf, &vg);

    double d_guarda = sqrt((d * d) + (milhas * milhas));

    t2 = milhas / vf;
    t1 = d_guarda / vg;

    if (d == -1 && vf == -1 && vg == -1)
    {
        return;
    }
    else if (t1 <= t2)
    {
        printf("S\n");
        resultado(t1, t2, d, vf, vg, milhas);
    }
    else
    {
        printf("N\n");
        resultado(t1, t2, d, vf, vg, milhas);
    }

}

int main() 
{
    double d, vf, vg;
    double t1, t2;
    const double milhas = 12;

    resultado(t1, t2, d, vf, vg, milhas);

	return 0;
}