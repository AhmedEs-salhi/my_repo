#include <stdio.h>

int add(int, int);

int main()
{
  int a, b;
  int result;

  a = 29;
  b = 43;

  result = add(a, b);

  printf("%d + %d = %d", a, b, result);
  return 0;
}

int add(int a, int b)
{
  int result;

  result = a + b;
  return result;
}
  
