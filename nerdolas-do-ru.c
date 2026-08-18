#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fab (char var1, int num1, int num2, int num3, int num4, int num5);
int fim (char var1, int num6, int num7, int num8, int num9, int num10);

int main() 
{
	char ryan1, filipe1, ruan1, heron1, ryan2, filipe2, ruan2, heron2;
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	int valor_r1, valor_f1, valor_u1, valor_h1, valor_r2, valor_f2, valor_u2, valor_h2;
	int ryan, filipe, ruan, heron;

	scanf (" %c %c %c %c %c %c %c %c", &ryan1, &filipe1, &ruan1, &heron1, &ryan2, &filipe2, &ruan2, &heron2);
	scanf ("%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);

	valor_r1 = fab(ryan1, num1, num2, num3, num4, num5);
	valor_f1 = fab(filipe1, num1, num2, num3, num4, num5);
	valor_u1 = fab(ruan1, num1, num2, num3, num4, num5);
	valor_h1 = fab(heron1, num1, num2, num3, num4, num5);

	valor_r2 = fim(ryan2, num6, num7, num8, num9, num10);
	valor_f2 = fim(filipe2, num6, num7, num8, num9, num10);
	valor_u2 = fim(ruan2, num6, num7, num8, num9, num10);
	valor_h2 = fim(heron2, num6, num7, num8, num9, num10);

	ryan = valor_r1 * valor_r2;
	filipe = valor_f1 * valor_f2;
	ruan = valor_u1 * valor_u2;
	heron = valor_h1 * valor_h2;

	if (ryan > 100)
		ryan = ryan % 100;
	if (filipe > 100)
		filipe = filipe % 100;
	if (ruan > 100)
		ruan = ruan % 100;
	if (heron > 100)
		heron = heron % 100;

	if (ryan > filipe && ryan > ruan && ryan > heron)
		printf("Ryan %d - Vencedor\n", ryan);
	else if (filipe > ryan && filipe > ruan && filipe > heron)
		printf("Filipe %d - Vencedor\n", filipe);
	else if (ruan > ryan && ruan > filipe && ruan > heron)
		printf("Ruan %d - Vencedor\n", ruan);
	else
		printf("Heron %d - Vencedor\n", heron);

	if (ryan < filipe && ryan < ruan && ryan < heron)
		printf("Ryan %d - Perdedor\n", ryan);
	else if (filipe < ryan && filipe < ruan && filipe < heron)
		printf("Filipe %d - Perdedor\n", filipe);
	else if (ruan < ryan && ruan < filipe && ruan < heron)
		printf("Ruan %d - Perdedor\n", ruan);
	else
		printf("Heron %d - Perdedor\n", heron);
	return 0;
}

int fab (char var1, int num1, int num2, int num3, int num4, int num5)
{
	int x1;
	if (var1 == 'a')
		x1 = num1;
	else if (var1 == 'b')
		x1 = num2;
	else if (var1 == 'c')
		x1 = num3;
	else if (var1 == 'd')
		x1 = num4;
	else
		x1 = num5;

	return x1;
}

int fim (char var1, int num6, int num7, int num8, int num9, int num10)
{
	int x2;
	if (var1 == 'i')
		x2 = num6;
	else if (var1 == 'j')
		x2 = num7;
	else if (var1 == 'k')
		x2 = num8;
	else if (var1 == 'l')
		x2 = num9;
	else
		x2 = num10;

	return x2;
}