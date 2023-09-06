#include<iostream>

int main()
{
    float x, y, q;

    std::cout << "Digite a primeira coordenada: ";
    std::cin >> x;
    std::cout << "Digite a segunda coordenada: ";
    std::cin >> y;

    q = 
    x > 0 && y > 0 ? 1 :
    (x < 0 && y > 0 ? 2 :
    (x < 0 && y < 0 ? 3 :
    (x > 0 && y < 0 ? 4 : 0)));

    q != 0 ? (std::cout << "A coordenada esta no quadrante " << q) : 
    (std::cout << "A coordenada esta sobre um dos eixos");
    return 0;
}