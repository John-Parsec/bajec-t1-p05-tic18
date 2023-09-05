#include <iostream>

using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double x, y;

    printf("Digite as coordenadas do plano: ");

    scanf("%lf %lf", &x, &y);

    printf("O ponto está no %s", (x > 0 && y > 0)     ? "primeiro quadrante"
                                 : (x < 0 && y > 0)   ? "segundo quadrante"
                                 : (x < 0 && y < 0)   ? "terceiro quadrante"
                                 : (x > 0 && y < 0)   ? "quarto quadrante"
                                 : (x == 0 && y == 0) ? "centro"
                                 : (x == 0)           ? "eixo y"
                                                      : "eixo x");

    return 0;
}