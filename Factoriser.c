#include <stdio.h>

int primeNumber(int n)
{
    int mod, prime;

    prime = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            prime++;
    }

    if(prime == 2)
        return 1;
    else
        return 0;
}

void Factoriser(int n)
{
    int prime;

    prime = primeNumber(n);

    if(prime == 1)
        printf("la factorisation du nombre %d est : %d\n", n, n);
    else
    {
        printf("la factorisation du nombre %d est : \n", n);
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0 && primeNumber(i) == 1)
                printf("%d\n", i);
        }
        
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

    Factoriser(n);

}
