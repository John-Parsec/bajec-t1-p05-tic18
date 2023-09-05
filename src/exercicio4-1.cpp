#include <iostream>

using namespace std;

int main(void)
{
    double x, y, z;

    printf("Digite dois numeros: ");

    scanf("%lf %lf", &x, &y);

    z = x + y;

    printf("SOMA = %.2lf\n", z);

    z = (x + y)/2;

    printf("MEDIA = %.2lf\n", z);

    z = x * y;

    printf("PROD = %.2lf\n", z);

    z = (x > y) ? x : y;

    printf("MAIOR = %.2lf\n", z);

    z = (x < y) ? x : y;

    printf("MENOR = %.2lf\n", z);

    return 0;
}