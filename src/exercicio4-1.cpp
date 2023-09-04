#include <iostream>

using namespace std;

int main(void){
    //a
    double x, y, z;

    // b
    cout << "Digite um numero real: ";
    scanf("%lf", &x);
    cout << "Digite um numero real: ";
    scanf("%lf", &y);

    // c
    z = x + y;
    cout << "Soma " << x << " e "<< y << ": " << z << endl;
    
    // d
    z /= 2;
    cout << "Media " << x << " e "<< y << ": " << z << endl;
    
    // e
    z = x * y;
    cout << "Produto " << x << " e "<< y << ": " << z << endl;
    
    // f
    z = (x > y)? x : y;
    cout << "Maior entre " << x << " e "<< y << ": " << z << endl;
    
    // g
    z = (z != x)? x : y;
    cout << "Menor entre " << x << " e "<< y << ": " << z << endl;
    
    return 0;
}