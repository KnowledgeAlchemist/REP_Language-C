#include <math.h>
#include <stdio.h>

int main() {
  int distanciaFugitivo, velocidadeFugitivo, velocidadeGuardaCosteira;
  float distanciaTotal, tempoFugitivo, tempoGuardaCosteira;
  while (1) {
    printf("Distância entre o fugitivo e a Guarda: ");
    if (scanf("%d", &distanciaFugitivo) == EOF)
      break;
    printf("Velocidade do fugitivo: ");
    scanf("%d", &velocidadeFugitivo);
    printf("Velocidade Guarda Costeira: ");
    scanf("%d", &velocidadeGuardaCosteira);
    distanciaTotal = sqrt(144 + distanciaFugitivo * distanciaFugitivo);
    tempoFugitivo = 12.0 / velocidadeFugitivo;
    tempoGuardaCosteira = distanciaTotal / velocidadeGuardaCosteira;
    char resultado = (tempoFugitivo >= tempoGuardaCosteira) ? 'S' : 'N';
    printf("A Guarda Costeira conseguirá alcançar o fugitivo? %c\n\n",
           resultado);
  }
  return 0;
}