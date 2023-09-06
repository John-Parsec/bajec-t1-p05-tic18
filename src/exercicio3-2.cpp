#include <iostream>
using namespace std;
int main(void)
{
    int num1, num2;
    cout << "Digite dois numeros:" << endl;
    cin >> num1 >> num2;
    // o primeiro codicional verifica quem é maior, e o segundo verifica se é par ou não atraves do "%" (resto da divisão)
    // sempre que for par o resto vai dar "0", 0 é entendi como false, foi preferido usar o "!" para inverter o valor
    (num1 > num2) ? (!(num1 % 2) ? cout << num1 << " e maior"
                                        << " (par)"
                                 : cout << num1 << " e maior"
                                        << " (impar)" << endl)
                  : (!(num2 % 2) ? cout << num2 << " e maior"
                                        << " (par)"
                                 : cout << num2 << " e maior"
                                        << " (impar)" << endl);

    (num1 == num2) ? cout << "Os numeros sao iguais" << endl : cout << "";

    return 0;
}