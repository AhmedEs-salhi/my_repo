#include <stdio.h>

int SommeChiffres(int n)
{
	int mod;

	if(n == 0)
		return 0;
	else
	{
		mod = n % 10;
		return mod + SommeChiffres(n / 10);
	}

int main()
{
	int n, result;

	do
	{
	printf("\tSaisir votre nombre (>= 0): ");
	scanf("%d", &n);
	}while(n < 0);

	result = SommeChiffres(n);

	printf("\tLa somme des chiffres de %d est : %d\n", n, result);

	return 0;
}
