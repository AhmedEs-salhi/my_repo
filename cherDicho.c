#include <stdio.h>
#define N 100

int cherDich(int T[], int n, int x)
{
    int mil, inf, sup;

    inf = 0;
    sup = n;

    while(inf <= sup)
    {
        mil = (inf + sup) / 2;
        if(T[mil] == x)
            return mil;
        else if(T[mil] < x)
            inf = mil;
        else
            sup = mil;
    }
    return -1;
}

void readArr(int T[], int taille)
{
    for(int i = 0; i < taille; i++)
    {
        printf("Valeur T[%d] : ", i);
        scanf("%d", &T[i]);
    }
}

int main()
{
    int T[N], n, result, valCher;

    do
    {
        printf("Saisir la taille du tableau : ");
        scanf("%d", &n);
    } while (n > N);
    
    readArr(T, n);

    printf("Saisir la valeur que chercher dans le tableau : ");
    scanf("%d", &valCher);

    result = cherDich(T, n, valCher);

    if(result == -1)
        printf("la valeur %d n'exist pas dans le tableau. \n", valCher);
    else
        printf("la valeure %d exist dans T[%d].\n", valCher, result);        
    return 0;
}
