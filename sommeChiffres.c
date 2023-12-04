#include <stdio.h>

int sommeChiffres(int n)
{
    int sum, mod;

    if(n == 0)
        return 0;
    else
    {
        mod = n % 10;
        sum += mod;
        return mod + sommeChiffres(n / 10);
    }
}

int main()
{
    int n, result;

    do
    {
    printf("Enter your number : ");
    scanf("%d", &n);
    }while(n < 0);

    result = sommeChiffres(n);

    printf("La somme des chiffres de %d est : %d\n", n, result);
    
    return 0;
}
