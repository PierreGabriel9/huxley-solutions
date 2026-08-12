    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>

    int main() 
    {
        int vel_max, vel_moto;
        scanf("%i %i", &vel_max, &vel_moto);

        if (vel_moto > 1.5 * vel_max)
        {
            printf("574.62\n7\n");
        }
        else if (vel_moto > 1.2 * vel_max && vel_moto <= 1.5 * vel_max)
        {
            printf("127.69\n5\n");
        }
        else if (vel_moto <= 1.2 * vel_max && vel_moto > vel_max)
        {
            printf("85.13\n4\n");
        }
        else
        {
            printf("0.00\n0\n");
        }

        return 0;
    }