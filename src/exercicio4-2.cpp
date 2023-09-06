#include<iostream>
#include<cmath>

int main()
{
    float r;
    std::cout << "Digite o valor do raio da circunferencia: ";
    std::cin >> r;

    //a
    std::cout << "Diametro: " << r * 2 << std::endl;
    
    //b
    std::cout << "Perimetro: " << r * 2 * 3.14 << std::endl;
    
    //c
    std::cout << "Area: " << pow(r, 2) * 3.14 << std::endl;
    
}