#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tri(int num, int i)
{
    if (i >= num / 2)
    {
        if (i * (i + 1) * (i + 2) == num)
        {
            printf("%d * %d * %d = %d\n", i, i + 1, i + 2, num);
            printf("Verdadeiro\n");
        }
        else
        {
            printf("Falso\n");
        }
    }
    else
    {
        if (i * (i + 1) * (i +2) == num)
        {
            printf("%d * %d * %d = %d\n", i, i + 1, i + 2, num);
            printf("Verdadeiro\n");
        }
        else
        {
            i++;
            tri(num, i);
        }
    }
}

int main() 
{
    int n;
    int i = 1;
    scanf("%d", &n);

    tri(n, i);

	return 0;
}