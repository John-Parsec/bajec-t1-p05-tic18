#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int a, b, c;
    cout << "Digite dois numeros:" << endl;
    cin >> a >> b;
    c = 4 * a + b / 3 - 5;
    cout << "Resultado: 4 * " << a << " + " << b << " / 3 + 5 = " << c << endl;

    c = 4 * (a + b) / (3 + 5);
    cout << "Resultado: 4 * (" << a << " + " << b << ") / (3 + 5) = " << c << endl;
    /*Assim como na matématica, os operadores em c++ tem precedencia,
    ou seja, possuem nivels hieraquicos que o programa ira seguir.
    No primeiro exemplo os operadores de maior precedencia são "*" e "/"
    sendo realizado na sequencia da esquerda para a direita.Ficamos com:
    Suponha a=1 e b=2
    4*1 -> 4
    2/3 -> 0, pois se trata de divisão inteira
    após resolver esses operadores os que sobram são os "+" e "-" que são
    como eles tem a mesma precedencia , serão resolvidos da esquerda para a direita
    totalizando 4+0-5 = -1

    No segundo caso tempos os "()" que tem a maior precedencia, sendo resolvidos primeiro,
    por isso o resultado é diferente do primeiro caso.
    */
   //outro exemplo de precedencia
    c = 4 * (a + (b / 3) + 5);
    cout << "Resultado: 4 * (" << a << " + (" << b << " / 3) + 5) = " << c << endl;

    c= pow(a,2) + 2*b + c;
    return 0;
}