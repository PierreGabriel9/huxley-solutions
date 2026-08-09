#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("1\n");
    }
    else
        printf("0\n");
        
    if (a == b)
    {
        printf("1\n");
    }
    else
        printf("0\n");
    
    if (a < b)
    {
        printf("1\n");
    }
    else
        printf("0\n");
        
    if (a != b)
    {
        printf("1\n");
    }
    else
        printf("0\n");
        
    if (a >= b)
    {
        printf("1\n");
    }
    else
        printf("0\n");
    
    if (a <= b)
    {
        printf("1\n");
    }
    else
        printf("0\n");
    
	return 0;
}