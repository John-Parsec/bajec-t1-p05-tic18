#include <iostream>

using namespace std;

int main(void){
    int a, b, c;

    cout << "Digite um inteiro:";
    cin >> a;
    cout << "Digite um inteiro:";
    cin >> b;

    c = 4*a + b/3 - 5;
    cout << "4*a + b/3 - 5 = " << c << endl;

    c = 4*(a + b)/(3 - 5);
    cout << "4*(a + b)/(3 - 5) = " << c << endl;

    
    
    return 0;
}