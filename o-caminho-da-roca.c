#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char um, dois, tres, quatro;
    scanf(" %c %c %c %c", &um, &dois, &tres, &quatro);

    if (um == 'E')
    {
        if (tres == 'E')
        {
            printf("Galpao de ordenha\n");
        }
        else
        {
            printf("Estabulo\n");
        }
    }
    else
    {
        if (dois == 'E')
        {
            printf("Coucho\n");
        }
        else
        {
            if (quatro == 'E')
            {
                printf("Abrigo\n");
            }
            else
            {
                printf("Pasto\n");
            }
        }
    }
	return 0;
}