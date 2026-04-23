// QUESTÃO 21 - Validação de CPF

#include <stdio.h>

// Função para calcular dígito verificador
int calculaDigito(int cpf[], int pesoInicial) {
    int soma = 0;

    for (int i = 0; i < pesoInicial - 1; i++) {
        soma += cpf[i] * (pesoInicial - i);
    }

    int resto = soma % 11;

    if (resto < 2) return 0;
    else return 11 - resto;
}

// Função para validar CPF
int validarCPF(int cpf[]) {
    int temp[11];

    // copia os 9 primeiros dígitos
    for (int i = 0; i < 9; i++) {
        temp[i] = cpf[i];
    }

    // calcula o primeiro dígito
    temp[9] = calculaDigito(temp, 10);

    // calcula o segundo dígito (usa o primeiro)
    temp[10] = calculaDigito(temp, 11);

    // compara com o CPF informado
    if (temp[9] == cpf[9] && temp[10] == cpf[10]) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int cpf[11];
    char nome[50];

    while (1) {
        printf("\nDigite o nome (ou FIM para encerrar): ");
        scanf("%s", nome);

        if (nome[0] == 'F' && nome[1] == 'I' && nome[2] == 'M') {
            break;
        }

        printf("Digite o CPF (11 digitos separados): ");
        for (int i = 0; i < 11; i++) {
            scanf("%d", &cpf[i]);
        }

        if (validarCPF(cpf)) {
            printf("%s - CPF VALIDO\n", nome);
        } else {
            printf("%s - CPF INVALIDO\n", nome);
        }
    }

    return 0;
}