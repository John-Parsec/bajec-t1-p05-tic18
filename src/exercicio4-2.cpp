#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    double raio;

    cout << "Digite o raio: ";
    cin >> raio;
    
    cout << "Diametro: " << 2*raio << endl;
    cout << "Circunferencia: " << 2*M_PI*raio << endl;
    cout << "Area: " << M_PI*raio*raio << endl;

    return 0;
}