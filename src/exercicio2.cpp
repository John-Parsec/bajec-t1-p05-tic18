#include <iostream>

using namespace std;

int main(void){
    //a)
    int a, b, c;
    
    //b)
    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    //c)
    c = 4 * a + b / 3 - 5;

    //d)
    cout << "O resultado da expressão 4 * a + b / 3 - 5 é: " << c << endl;

    //e)
    c = (4 * (a + b)) / (3 - 5);
    cout << "O resultado da expressão (4 * (a + b)) / (3 - 5) é: " << c << endl;

    //f)
    //O resultado das expressões são diferentes pois a precedência dos operadores é diferente.
    // na primeira expressão, como nao usa parenteses, a precedência é: 4*a + (b/3) - 5.
    // na segunda expressão usa parenteses por tanto a precedencia segue o indicado.

    //g)
    c = (a*a) + 2*b + c;
    cout << "O resultado da expressão a² + 2 * b + c é: " << c << endl;

    return 0;
}