#include <stdio.h>

int main()
{
    int a, b, c, d, aux;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (b < c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (c < d)
    {
        aux = c;
        c = d;
        d = aux;
    }
    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (b < c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    printf("%d %d %d %d\n", a, b, c, d);
}