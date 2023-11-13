#include <stdio.h>

int main()
{
  int n, ehPrimo = 1;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      ehPrimo = 0;
    }
  };

  if (n <= 1) {
    ehPrimo = 0;
  }
  

    if (ehPrimo == 1) {
      printf("O numero inserido eh primo");
    } else {
      printf("O numero inserido nao eh primo");
    }

  return 0;
}