#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double preco, pagamento, troco;
    int aux;
    scanf("%lf%lf", &preco, &pagamento);

    troco = pagamento - preco;
    aux = troco;

    printf("Troco: %.2lf\n", troco);

    if (troco >= 20)
    {
        troco = troco - (20 * (aux / 20));
    }
    printf("Notas de 20: %d\n", aux / 20);
    aux = troco;

    if (troco >= 10)
    {
        troco = troco - (10 * (aux / 10));
    }
    printf("Notas de 10: %d\n", aux / 10);
    aux = troco;

    if (troco >= 5)
    {
        troco = troco - (5 * (aux / 5));
    }
    printf("Notas de 5: %d\n", aux / 5);
    aux = troco;

    if (troco >= 1)
    {
        troco = troco - aux;
    }
    printf("Moedas de 1: %d\n", aux);
    
    printf("Moedas de 0.50: %.0lf\n", troco / 0.5);

	return 0;
}