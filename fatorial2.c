#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fat(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * fat(num - 1);
    }
}

int repeticao(int x)
{
    if (x == -1)
    {
        return 0;
    }
    else
    {
        printf("%d\n", fat(x));
        scanf("%d", &x);
        return repeticao(x);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    repeticao(n);
	return 0;
}
