#include <iostream>

using namespace std;

int main(void){
    double x, y;

    cout << "Digite a coordena X: ";
    cin >> x;
    cout << "Digite a coordena Y: ";
    cin >> y;

    cout << ((x == 0 || y == 0)? "Ponto sobre eixo": 
            ((x > 0 && y > 0)? "Ponto no primeiro quadrante": 
            ((x > 0)? "Ponto no quarto quadrante": 
            ((y > 0)? "Ponto no segundo quadrante": "Ponto no terceiro quadrante"))));
    
    return 0;
}