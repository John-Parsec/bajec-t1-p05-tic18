#include <iostream>

using namespace std;

/*
Escreva um programa que:
peça ao usuário para fornecer dois números inteiros, obtenha-os da
entrada padrão, usando cin, e imprima o maior deles seguido das
palavras “e maior”.
b. Se os números foram iguais, imprima a mensagem “estes
números são iguais”. Use apenas o operador condicional (?).
c. Identifique se o maior valor é um número par ou ímpar.
*/

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