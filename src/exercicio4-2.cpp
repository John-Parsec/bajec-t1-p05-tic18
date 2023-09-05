#include <iostream>

using namespace std;

int main(void)
{
    double r;

    printf("Digite o raio: ");

    scanf("%lf", &r);


    printf("Diametro = %.4lf\n", 2 * r);

    printf("Perimetro = %.4lf\n", 2 * 3.14159 * r);
    
    printf("Area = %.4lf\n", 3.14159 * r * r);

    return 0;
}