#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Digite um numero inteiro: ";
    cin >> num1;
    cout << "Digite um numero inteiro: ";
    cin >> num2;

    cout << ((num1 > num2)? num1 : num2) << " é maior\n";
    
    return 0;
}