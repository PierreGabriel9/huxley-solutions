#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    else
    {
        return mdc(y, x % y);
    }
}

int main() 
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d\n", mdc(a, b));
	return 0;
}