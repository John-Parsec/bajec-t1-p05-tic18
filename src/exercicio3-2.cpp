#include <iostream>

using namespace std;

int main(void){
    //a)
    int n1, n2, maior;

    cout << "Digite dois numeros inteiros: ";
    cin >> n1 >> n2;

    maior = n1 > n2 ? n1 : n2;

    cout << maior  << " e maior" << endl;

    //b)
    cout << "Estes numeros são " << (n1 == n2 ? "iguais" : "diferentes") << endl;

    //c)
    cout << "O maior numero é " << (maior % 2 == 0 ? "par" : "impar") << endl;

    return 0;
}