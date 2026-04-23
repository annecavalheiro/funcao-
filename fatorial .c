#include <stdio.h>

// Função para calcular fatorial (retorna double para suportar números maiores)
double fatorial(int n) {
    if (n < 0) return 0; // Fatorial de número negativo não existe
    double fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Não existe fatorial de número negativo.\n");
    } else {
        printf("Fatorial de %d = %.0f\n", num, fatorial(num));
    }
    
    return 0;
}
