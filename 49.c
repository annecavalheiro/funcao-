//49.Um número é dito ser regular caso sua decomposição em fatores primos apresenta apenas potências de 2, 3 e 5.
//Faça uma função que verifique se um número é (retorne ou não (retorne 0) regular.
//Escreva também um algoritmo para testar tal função.

#include <stdio.h>

// Função que verifica se é regular
int ehRegular(int n) {
    
    if (n <= 0) {
        return 0;
    }

    // divide por 2
    while (n % 2 == 0) {
        n = n / 2;
    }

    // divide por 3
    while (n % 3 == 0) {
        n = n / 3;
    }

    // divide por 5
    while (n % 5 == 0) {
        n = n / 5;
    }

    // se sobrou 1, é regular
    if (n == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehRegular(num) == 1) {
        printf("E regular\n");
    } else {
        printf("Nao e regular\n");
    }

    return 0;
}