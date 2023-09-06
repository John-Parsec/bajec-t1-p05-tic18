#include<iostream>

int main()
{
    //a b
    int a, b, c;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> a;
    std::cout << "Digite o segundo numero: ";
    std::cin >> b;
    
    a > b ? (std::cout << a << " e maior") : 
    (a < b ? (std::cout << b << " e maior") :
    (std::cout << "Estes numeros sao iguais"));
    std::cout << std::endl;

    //c
    c = a > b ? a : b;

    c % 2 == 0 ? 
    (std::cout << "O maior valor e par") :
    (std::cout << "O maior valor e impar");
    
    return 0;
}