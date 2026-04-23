#include <stdio.h>
#include <unistd.h> // para sleep()

// função que controla o tempo
void tempo(int segundos) {
    sleep(segundos);
}

int main() {
    int n, t;

    printf("Digite o numero inicial: ");
    scanf("%d", &n);

    printf("Digite o intervalo (segundos): ");
    scanf("%d", &t);

    for (int i = n; i >= 0; i--) {
        printf("%d\n", i);
        tempo(t);
    }

    return 0;
}