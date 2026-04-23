// QUESTÃO 3 - Contagem regressiva com controle de tempo

// QUESTÃO 3 - Contagem regressiva com controle de tempo (versão melhorada)

#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// Função para controlar o tempo
void tempo(int segundos) {
    // Processamento
    #ifdef _WIN32
        Sleep(segundos * 1000);
    #else
        sleep(segundos);
    #endif
}

// Função que realiza a contagem regressiva
void contagemRegressiva(int inicio, int intervalo) {
    // Processamento e Saída
    for (int i = inicio; i >= 0; i--) {
        printf("%d\n", i);
        tempo(intervalo);
    }
}

int main() {
    // Entrada
    int numero, intervalo;

    do {
        printf("Digite o numero inicial (>= 0): ");
        scanf("%d", &numero);
    } while (numero < 0);

    do {
        printf("Digite o intervalo em segundos (> 0): ");
        scanf("%d", &intervalo);
    } while (intervalo <= 0);

    // Processamento
    contagemRegressiva(numero, intervalo);

    // Saída final
    printf("Contagem finalizada!\n");

    return 0;
}