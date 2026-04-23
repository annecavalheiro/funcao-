// QUESTÃO 11 - Média de peso por espécie e sexo

#include <stdio.h>

// Função para calcular média
float calcularMedia(float soma, int qtd) {
    // Processamento
    if (qtd == 0) return 0;
    return soma / qtd;
}

int main() {
    // Entrada
    int quantidade;

    printf("Digite a quantidade de animais: ");
    scanf("%d", &quantidade);

    int especie;
    char sexo;
    float peso;

    // Acumuladores
    float somaBM = 0, somaBF = 0;
    float somaOM = 0, somaOF = 0;
    float somaCM = 0, somaCF = 0;

    int qtdBM = 0, qtdBF = 0;
    int qtdOM = 0, qtdOF = 0;
    int qtdCM = 0, qtdCF = 0;

    // Processamento
    for (int i = 0; i < quantidade; i++) {

        printf("\nAnimal %d\n", i + 1);

        printf("Especie (1-bovino, 2-ovino, 3-caprino): ");
        scanf("%d", &especie);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Peso: ");
        scanf("%f", &peso);

        if (especie == 1) { // Bovino
            if (sexo == 'M' || sexo == 'm') {
                somaBM += peso;
                qtdBM++;
            } else {
                somaBF += peso;
                qtdBF++;
            }
        }

        else if (especie == 2) { // Ovino
            if (sexo == 'M' || sexo == 'm') {
                somaOM += peso;
                qtdOM++;
            } else {
                somaOF += peso;
                qtdOF++;
            }
        }

        else if (especie == 3) { // Caprino
            if (sexo == 'M' || sexo == 'm') {
                somaCM += peso;
                qtdCM++;
            } else {
                somaCF += peso;
                qtdCF++;
            }
        }
    }

    // Saída
    printf("\n===== MEDIAS =====\n");

    printf("Bovinos Machos: %.2f\n", calcularMedia(somaBM, qtdBM));
    printf("Bovinos Femeas: %.2f\n", calcularMedia(somaBF, qtdBF));

    printf("Ovinos Machos: %.2f\n", calcularMedia(somaOM, qtdOM));
    printf("Ovinos Femeas: %.2f\n", calcularMedia(somaOF, qtdOF));

    printf("Caprinos Machos: %.2f\n", calcularMedia(somaCM, qtdCM));
    printf("Caprinos Femeas: %.2f\n", calcularMedia(somaCF, qtdCF));

    return 0;
}