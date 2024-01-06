#include <stdio.h>

int main() {
    float custoEspetaculo, precoConvite;

    // Solicitar o custo do espetáculo
    printf("Digite o custo do espetáculo: R$ ");
    scanf("%f", &custoEspetaculo);

    // Solicitar o preço do convite
    printf("Digite o preço do convite: R$ ");
    scanf("%f", &precoConvite);

    // Calcular a quantidade de convites necessários
    int quantidadeConvites = (int)(custoEspetaculo / precoConvite);

    // Certificar-se de que a quantidade é suficiente para cobrir o custo
    if (quantidadeConvites * precoConvite < custoEspetaculo) {
        quantidadeConvites++;
    }

    // Exibir a quantidade de convites necessários
    printf("Quantidade de convites necessários: %d\n", quantidadeConvites);

    return 0;
}
