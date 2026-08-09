#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero, antecessor, sucessor;
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("%d %d\n", antecessor, sucessor);
	return 0;
}