#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void contador(int n);
int mdc (int a, int b);

int main() 
{
    int vezes;
    scanf("%d", &vezes);
    contador(vezes);

	return 0;
}

int mdc (int a, int b)
{
    if (a % b == 0)
    {
        
        return b;
    }
    else
    {  
        return mdc(b, a % b);
    }
}

void contador(int n)
{
    int a, b;
    if (n <= 0)
    {
        return;
    }
    else
    {
        scanf("%d%d", &a, &b);
        printf("MDC(%d,%d) = %d\n", a, b, mdc(a, b));
        contador(n -1);
    }
}