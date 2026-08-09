#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade;
    scanf("%d", &idade);
    
    int segundos = idade * 365 * 24 * 60 * 60;
    
    printf("%d\n", segundos);
    
	return 0;
}