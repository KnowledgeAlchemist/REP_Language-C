#include <stdio.h>
int main() {
  int numero1, numero2;
  printf("Primeiro número: ");
  scanf("%d", &numero1);
  printf("Segundo número: ");
  scanf("%d", &numero2);
  int transporte = 0;
  int operacoesTransporte = 0;
  while (numero1 > 0 || numero2 > 0) {
    int digito1 = numero1 % 10;
    int digito2 = numero2 % 10;
    int soma = digito1 + digito2 + transporte;
    if (soma >= 10) {
      transporte = 1;
      operacoesTransporte++;
    } else {
      transporte = 0;
    }
    numero1 /= 10;
    numero2 /= 10;
  }
  printf("Quantidade de operações: %d\n", operacoesTransporte);
  return 0;
}