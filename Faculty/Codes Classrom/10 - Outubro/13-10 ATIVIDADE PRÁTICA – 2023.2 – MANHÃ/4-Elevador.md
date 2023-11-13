#include <stdio.h>

int main()
{
  int numeroLeituras, capacidadeMaxima;

  printf("Qual é o número de leituras do sensor e a capacidade máxima do elevador?");
  scanf("%d %d", &numeroLeituras, &capacidadeMaxima);

  int ocupacao = 0;
  for (int i = 0; i < numeroLeituras; i++)
  {
    int pessoasSairam, pessoasEntraram;
    printf("Leitura %d: Quantas pessoas saíram e entraram respectivamente?: ", i + 1);
    scanf("%d %d", &pessoasSairam, &pessoasEntraram);
    ocupacao -= pessoasSairam;
    ocupacao += pessoasEntraram;
    if (ocupacao > capacidadeMaxima)
    {
      printf("Capacidade máxima excedida.\n");
      return 0;
    }
  }
  printf("Capacidade não excedida.\n");
  return 0;
}