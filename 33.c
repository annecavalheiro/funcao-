//33. Segundo a conjectura de Golbach, qualquer número para, maior que 2, pode ser escrito como a soma
//de dois números primos. Exemplo: 8 = 3 + 5, 16 = 11 + 5, 68 = 31 + 37 etc. Dado um conjunto de
//números inteiros positivos, pares, fazer um programa que calcule, para cada número, um par de
//números primos cuja soma seja igual ao próprio número. Adotar como flag um número negativo.
//Para verificar se um número é primo, fazer um procedimento que deverá retornar em uma variável
//lógica o valor verdadeiro, se o número for primo e falso, em caso contrário.

#include <stdio.h>
#include <stdbool.h>

// Função que verifica se um número é primo
// Retorna verdadeiro (true) se for primo, falso (false) caso contrário
bool ehPrimo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

// Procedimento para encontrar e imprimir os dois primos que somam n
void encontrarParGoldbach(int n) {
    if (n <= 2 || n % 2 != 0) {
        printf("O numero %d nao e um par maior que 2.\n", n);
        return;
    }

    bool encontrado = false;
    // Percorre os números tentando encontrar p1 + p2 = n
    for (int i = 2; i <= n / 2; i++) {
        if (ehPrimo(i) && ehPrimo(n - i)) {
            printf("%d = %d + %d\n", n, i, (n - i));
            encontrado = true;
            break; // Encontrado o primeiro par, podemos parar
        }
    }

    if (!encontrado) {
        printf("Nao foi possivel encontrar um par para %d.\n", n);
    }
}

int main() {
    int num;

    printf("Conjectura de Goldbach (Digite um numero negativo para sair)\n");

    while (true) {
        printf("\nDigite um numero inteiro positivo e par: ");
        scanf("%d", &num);

        // Flag de parada
        if (num < 0) {
            break;
        }

        encontrarParGoldbach(num);
    }

    printf("Programa encerrado.\n");
    return 0;
}
