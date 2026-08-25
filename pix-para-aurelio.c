#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double tabela(double media)
{
    if (media >= 0 && media <= 10)
    {
        return 0.4;
    }
    else if (media <= 30)
    {
        return 0.6;
    }
    else if (media <= 60)
    {
        return 0.8;
    }
    else
    {
        return 1;
    }
}

int calculo(int num, char letra, int valor_a, int valor_b, int valor_c, int valor_d, double media)
{
    if (letra == 'a')
    {
        return (num + valor_a + (valor_a * tabela(media)));
    }
    else if (letra == 'b')
    {
        return (num + valor_b + (valor_b * tabela(media)));
    }
    else if (letra == 'c')
    {
        return (num + valor_c + (valor_c * tabela(media)));
    }
    else if (letra == 'd')
    {
        return (num + valor_d + (valor_d * tabela(media)));
    }
}

int main() 
{
    int nan, ngu, nri, nhi;
    char an, gu, ri, hi;
    int val_a, val_b, val_c, val_d;

    scanf("%d%d%d%d", &nan, &ngu, &nri, &nhi);
    scanf(" %c %c %c %c", &an, &gu, &ri, &hi);
    scanf("%d%d%d%d", &val_a, &val_b, &val_c, &val_d);

    double media = (nan + ngu + nri + nhi) / 4.0;
    
    double anderson = calculo(nan, an, val_a, val_b, val_c, val_d, media);
    double guilherme = calculo(ngu, gu, val_a, val_b, val_c, val_d, media);
    double rita = calculo(nri, ri, val_a, val_b, val_c, val_d, media);
    double higor = calculo(nhi, hi, val_a, val_b, val_c, val_d, media);

    if (anderson < guilherme && anderson < rita && anderson < higor)
    {
        printf("Anderson quem vai pagar o lanche!:D\n");
    }
    else if (guilherme < anderson && guilherme < rita && guilherme < higor)
    {
        printf("Guilherme quem vai pagar o lanche!:D\n");
    }
    else if (rita < anderson && rita < guilherme && rita < higor)
    {
        printf("Rita quem vai pagar o lanche!:D\n");
    }
    else
    {
        printf("Higor quem vai pagar o lanche!:D\n");
    }


	return 0;
}