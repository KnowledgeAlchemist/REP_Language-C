#include <stdio.h>

int main() {
  int consumo;
  int valorConta = 7;
  printf("Digite consumo de água: ");
  scanf("%d", &consumo);
  if (consumo > 10) {
    if (consumo <= 30) {
      valorConta += (consumo - 10) * 1;
    } else if (consumo <= 100) {
      valorConta += 20 + (consumo - 30) * 2;
    } else {
      valorConta += 20 + 140 + (consumo - 100) * 5;
    }
  }
  printf("Valor da conta: R$ %d\n", valorConta);
  return 0;
}