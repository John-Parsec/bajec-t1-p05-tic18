#include <iostream>

using namespace std;

int main(void){
    int x, y;

    cout << "Digite as coordenadas de um ponto: ";
    cin >> x >> y;

    cout << "O ponto (" << x << ", " << y << ") esta no " << (x == 0 && y == 0 ? "eixo" : (x > 0 ? (y > 0 ? "primeiro quadrante" : "quarto quadrante") : (y > 0 ? "segundo quadrante" : "terceiro quadrante"))) << endl;

    return 0;
}