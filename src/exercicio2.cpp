#include<iostream>
#include<cmath> //para usar a funcao pow()

int main()
{
    //a
    int a, b, c;

    //b
    std::cout << "Digite o primeiro numero: ";
    std::cin >> a;
    std::cout << "Digite o segundo numero: ";
    std::cin >> b;
    
    //c d
    c = 4 * a + b / 3 - 5;
    std::cout << c << std::endl;

    //e
    c = 4 * (a + b) / (3 - 5);
    std::cout << c << std::endl;

    /* f

    Os resultados foram diferentes pois a ordem da operação mudou
    com o incremento dos parênteses. Sem parênteses, nesse caso, as
    operações de soma e subtração seriam executados por último, 
    enquanto que, como no segundo caso essas duas operações estão em
    parênteses, elas são executadas primeiro, mudando o resultado final
    
    exemplo: 100 * a - b e 100 * (a - b)

    c = 100 * a - b;
    std::cout << c << std::endl;
    c = 100 * (a - b);
    std::cout << c << std::endl;

    se a = 2 e b = 1, as saídas serão respectivamente 199 e 100
    */    

    //g
    c = pow(a,2) + 2 * b + c;
    std::cout << c;
    
    return 0;   
}