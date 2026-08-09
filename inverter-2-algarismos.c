#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int num;
	
	scanf("%d", &num);
	
	if (num % 10 == 0)
	{
	    printf("%d\n", num/10);
	}
	else
	{
	    printf("%d%d\n", num % 10, num / 10);
	}
	return 0;
}