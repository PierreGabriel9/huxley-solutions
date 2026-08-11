#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int level, wats;

    scanf("%i", &level);

    if (level >= 1 && level <= 20)
    {
        wats = 20 + level * level * level;
        printf("Potencia de : %i W\n", wats);
    }
    else if (level > 20 && level <= 40)
    {
        wats = 8000 + ((level -10) * (level - 10));
        printf("Potencia de : %i W\n", wats);
    }
    else if (level > 40 && level <= 60)
    {
        wats = 9000 + 5 * level;
        printf("Potencia de : %i W\n", wats);
    }
    else if (level > 60 && level <= 80)
    {
        wats = 9300 + 2 * level;
        printf("Potencia de : %i W\n", wats);
    }
    else
    {
        wats = 9500 + level;
        printf("Potencia de : %i W\n", wats);
    }
	return 0;
}