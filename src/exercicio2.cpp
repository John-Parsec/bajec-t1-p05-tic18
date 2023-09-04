#include <iostream>

using namespace std;

int main(void){
    int a, b, c;

    cout << "Digite um inteiro: ";
    cin >> a;
    cout << "Digite um inteiro: ";
    cin >> b;

    /*  como a multiplicação e divisao tem precedencia
        4a e b/3 sao executados primeiro, depois eles
        somados e o resultaedo é diminuido em 5 unidades
    */ 
    c = 4*a + b/3 - 5;
    cout << "4*a + b/3 - 5 = " << c << endl;

    /*  como o q esta entre aparenteses tem priooridade, 
        (a + b) e (3 - 5) sao executados primeiro, esse resultado
        é usado pra fazer a divisao e a multiplicacao
    */ 
    c = 4*(a + b)/(3 - 5);
    cout << "4*(a + b)/(3 - 5) = " << c << endl;

    // outras espressões que geram resultados diferentes
    c = 4*(a + (b/3) - 5);
    cout << "4*(a + (b/3) - 5) = " << c << endl;
    c = 4*(a + (b/3)) - 5;
    cout << "(4*a) + (b/3) - 5 = " << c << endl;
    c = 4*(a + b)/3 - 5;
    cout << "4*a + (b/3 - 5) = " << c << endl;



    
    
    return 0;
}