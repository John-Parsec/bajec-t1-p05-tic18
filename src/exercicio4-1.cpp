#include<iostream>
#include<cstdio>

int main()
{
    //a
    double x, y, z;
    
    //b
    std::cout << "Digite o primeiro numero: ";
    scanf("%Le", &x);
    std::cout << "Digite o segundo numero: ";
    scanf("%Le", &y);

    //c
    z = x + y;
    std::cout << "x + y = " << z << std::endl;
    
    //d
    z = (x + y) / 2;
    std::cout << "Media de x e y = " << z << std::endl;
    
    //e
    z = x * y;
    std::cout << "x * y = " << z << std::endl;
    
    //f
    z = x > y ? x : y;
    std::cout << "O maior valor e = " << z << std::endl;
    
    //g
    z =  x < y ? x : y;
    std::cout << "O menor valor e = " << z << std::endl;
    return 0;
}