#include "main.h"

int main()
{
  	int a, b;
  	int result;

	a = 29;
  	b = 43;

	result = add(a, b);

	printf("%d + %d = %d", a, b, result);
	printf("\n%d - %d = %d", a, b, soust(a, b));
	
	return 0;
}
