#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double numA, numB;
    scanf("%lf", &numA);
    scanf("%lf", &numB);
    double media = ((numA * 3.5) + (numB * 7.5)) / 11;
    printf("MEDIA = %.5lf\n", media);
    
	return 0;
}