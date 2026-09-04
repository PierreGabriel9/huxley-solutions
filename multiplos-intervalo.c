#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mult(int num, int a, int b, int i)
{
    if (a == b)
    {
        if (b % num == 0)
        {
            int fator = b / num;
            printf("%d\n", num * fator);
        }
        else if (i == 0)
        {
            printf("INEXISTENTE\n");
        }
    }
    else
    {
        if (a % num == 0)
        {
            i++;
            int fator = a / num;
            printf("%d\n", num * fator);
            mult(num, a + 1, b, i);
        }
        else
        {
            mult(num, a + 1, b, i);
        }
    }
}

int main() 
{
    int num, a, b;
    scanf("%d%d%d", &num, &a, &b);

    int i = 0;

    mult(num, a, b, i);

	return 0;
}