#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double p_avela, p_caramelo, p_passas;
    
    scanf("%lf", &p_avela);
    scanf("%lf", &p_caramelo);
    scanf("%lf", &p_passas);
    
    int q_avela, q_caramelo, q_passas;
    
    scanf("%d", &q_avela);
    scanf("%d", &q_caramelo);
    scanf("%d", &q_passas);
    
    double preco_final = (p_avela * q_avela) + (p_caramelo * q_caramelo) + (p_passas * q_passas);
    printf("Valor: R$%.2lf", preco_final);
    
	return 0;
}