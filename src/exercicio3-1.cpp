#include <iostream>

using namespace std;

/*
Escreva um programa que
c. Atribua à variável ch3 o caractere que antecede ao caractere ch1,
imprima na tela, utilizando cout, o caractere em formato numérico 
decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
caractere imprimível, substitua ele pelo caractere '_')
d. Atribua à variável ch3 o caractere que precede ao caractere ch2,
imprima na tela, utilizando printf, o caractere em formato numérico
decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
caractere imprimível, substitua ele pelo caractere '_')
e. Atribua à variável ch3 o valor 'A' se o caractere ch1 for uma letra
maiúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
operador condicional (?) com esta finalidade. Imprima o valor de ch3
na tela;
f. Atribua à variável ch3 o valor 'a' se o caractere ch2 for uma letra
minúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
operador condicional (?) com esta finalidade. Imprima o valor de ch3
na tela;
g. Atribua à variável ch3 o valor '1' se o caractere ch1 ou o caractere
ch2 forem um dígito e o valor ' '(caractere espaço vazio) caso
contrário. Use o operador condicional (?) com esta finalidade.
Imprima o valor de ch3 na tela;
*/

int main(void){
    //a)
    char ch1, ch2, ch3;

    //b)
    cout << "Digite dois caracteres: ";
    cin >> ch1 >> ch2;

    //c)
    ch3 = ch1 - 1;
    cout << "O caractere que antecede o caractere " << ch1 << " é: " << ch3 << endl;
    cout << "\tDec\tHex\tOct\n";
    cout << "'" << ch3 <<"' -\t" << dec << (int)ch3 << '\t' << hex << (int)ch3 << '\t' << oct << (int)ch3 << '\t' << '\n';

    //d)
    ch3 = ch2 - 1;
    printf("O caractere que precede o caractere %c é: %c\n", ch2, ch3);
    printf("\tDec\tHex\tOct\n");
    printf("'%c' -\t%d\t%x\t%o\t\n", ch3, ch3, ch3, ch3);

    //e)
    ch3 = (ch1 >= 'A' && ch1 <= 'Z') ? 'A' : ' ';
    cout << ch3 << endl;

    //f)
    ch3 = (ch2 >= 'a' && ch2 <= 'z') ? 'a' : ' ';
    cout << ch3 << endl;

    //g)
    ch3 = (ch1 >= '0' && ch1 <= '9') || (ch2 >= '0' && ch2 <= '9') ? '1' : ' ';
    cout << ch3 << endl;
    
    return 0;
}