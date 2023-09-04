#include <iostream>

using namespace std;

int main(void){

    double raio, diametro;

    cout << "Digite o raio de um circulo: ";
    cin >> raio;

    //a)
    diametro = 2 * raio;

    cout << "O diametro do circulo é: " << diametro << endl;

    //b)
    cout << "O perimetro do circulo é: " << diametro * 3.1415 << endl;

    //c)
    cout << "A area do circulo é: " << 3.1415 * raio * raio << endl;

    return 0;
}