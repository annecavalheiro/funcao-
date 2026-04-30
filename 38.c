//38. Faça um programa calculadora simples com as seguintes operações possíveis: adição, subtração,
//multiplicação e divisão. O programa inicia apresentando ao usuário um menu de opções como mostradoabaixo:
//**********************************************************************
//* Calculadora Simples. Opcoes possiveis:
//* 1. Adicao
//* 2. Subtracao
//* 3. Multiplicacao
//* 4. Divisao
//* 5. Sair do programa
//*********************************************************************
//Entre com sua opcao:
//Crie um função que apresenta o menu inicial acima e retorna a opção do usuário para o programa principal.
//Esta opção é então analisada e o programa principal chama as funções de adição, subtração, multiplicaçãoe divisão conforme a opção do usuário. Se a opção for inválida, informe ao usuário e peça a ele para entrar
//com uma opção válida. Após a execução da operação o programa volta a apresentar o menu inicial até queo usuário encerre o programa com a opção 5.
//39. Escreva um programa que lê um valor inteiro (maior do que 1 e menor ou igual a 10) e exibe a tabuada
//(até 10) de multiplicação do número lido. Você deverá escrever as seguintes funções e procedimentos:


#include <stdio.h>

// Função que mostra o menu
int menu() {
    // Saída
    printf("* Calculadora Simples\n");
    printf("* 1. Adicao\n");
    printf("* 2. Subtracao\n");
    printf("* 3. Multiplicacao\n");
    printf("* 4. Divisao\n");
    printf("* 5. Sair\n");
    printf("Opcao: ");

    // Entrada
    int op;
    scanf("%d", &op);

    return op;
}

// Funções das operações
float soma(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mult(float a, float b) {
    return a * b;
}

float divi(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    int op;
    float n1, n2, res;

    do {
        op = menu();

        if (op >= 1 && op <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
        }

        // Processamento
        switch (op) {
            case 1:
                res = soma(n1, n2);
                printf("Resultado: %.2f\n", res);
                break;

            case 2:
                res = sub(n1, n2);
                printf("Resultado: %.2f\n", res);
                break;

            case 3:
                res = mult(n1, n2);
                printf("Resultado: %.2f\n", res);
                break;

            case 4:
                res = divi(n1, n2);
                printf("Resultado: %.2f\n", res);
                break;

            case 5:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida\n");
        }

    } while (op != 5);

    return 0;
}