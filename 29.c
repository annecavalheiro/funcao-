//29. Calcular e escrever a área de 10 tetraedros, dadas as coordenadas de cada um de seus quatro vértices.
//Para tanto, deverão ser utilizados os seguintes procedimento.
//a) Que calcula a distância entre dois pontos do espaço;
//b) Que calcula a área de um triângulo em função de seus lados.
// Area  P*( p  a)*(P b)*(P  c) , onde P é o semiperímetro do triângulo.

#include <stdio.h>
#include <math.h>

// a) distância entre dois pontos no espaço
float distancia(float x1, float y1, float z1,
                float x2, float y2, float z2) {

    return sqrt(pow(x1 - x2, 2) +
                pow(y1 - y2, 2) +
                pow(z1 - z2, 2));
}

// b) área de um triângulo (Heron)
float areaTriangulo(float a, float b, float c) {
    float p = (a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    float x[4], y[4], z[4];

    for (int t = 1; t <= 10; t++) {

        printf("\nTetraedro %d:\n", t);

        // leitura dos 4 pontos
        for (int i = 0; i < 4; i++) {
            printf("Ponto %d (x y z): ", i + 1);
            scanf("%f %f %f", &x[i], &y[i], &z[i]);
        }

        float areaTotal = 0;

        // faces do tetraedro (4 triângulos)
        int faces[4][3] = {
            {0,1,2},
            {0,1,3},
            {0,2,3},
            {1,2,3}
        };

        for (int i = 0; i < 4; i++) {

            int a = faces[i][0];
            int b = faces[i][1];
            int c = faces[i][2];

            // lados do triângulo
            float lado1 = distancia(x[a], y[a], z[a], x[b], y[b], z[b]);
            float lado2 = distancia(x[a], y[a], z[a], x[c], y[c], z[c]);
            float lado3 = distancia(x[b], y[b], z[b], x[c], y[c], z[c]);

            areaTotal += areaTriangulo(lado1, lado2, lado3);
        }

        printf("Area do tetraedro = %.2f\n", areaTotal);
    }

    return 0;
}