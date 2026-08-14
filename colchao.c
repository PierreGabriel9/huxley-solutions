#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printn();
void prints();

int main() 
{
    int h, l;
    int a, b, c;

    scanf("%d%d%d%d%d", &a, &b, &c, &h, &l);

    if (a > l && b > l && c > l || a > h && b > h && c > h)
    {
        printn();
    }
    else if (l >= a && l >= b)
    {
        prints();
    }
    else if (l >= a && l >= c)
    {
        prints();
    }
    else if (l >= b && l >= c)
    {
        prints();
    }
    else if (h >= a && h >= b)
    {
        prints();
    }
    else if (h >= a && h >= c)
    {
        prints();
    }
    else if (h >= b && h >= c)
    {
        prints();
    }
    else
    {
        printn();
    }

	return 0;
}

void printn()
{
    printf("N\n");
}

void prints()
{
    printf("S\n");
}