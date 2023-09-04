#include <iostream>

using namespace std;

int main(void){
    //a)
    double x, y, z;

    //b)
    cout << "Digite dois numeros de ponto flutuante: ";
    scanf("%lf %lf", &x, &y);

    //c)
    z = x + y;
    cout << "A soma de " << x << " e " << y << " e " << z << endl;

    //d)
    z = (x + y) / 2;
    cout << "A media de " << x << " e " << y << " e " << z << endl;

    //e)
    z = x * y;
    cout << "O produto de " << x << " e " << y << " e " << z << endl;

    //f)
    z = x > y ? x : y;
    cout << "O maior valor entre " << x << " e " << y << " e " << z << endl;

    //g)
    z = x < y ? x : y;
    cout << "O menor valor entre " << x << " e " << y << " e " << z << endl;

    return 0;
}