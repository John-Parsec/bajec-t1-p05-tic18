#include<iostream>
#include<cstdio> //para utilizar printf
#include<cctype> //para utilizar funcoes como isupper()

int main()
{
    //a
    char ch1, ch2, ch3;

    //b
    std::cout << "Digite o primeiro caractere: ";
    std::cin >> ch1;
    std::cout << "Digite o segundo caractere: ";
    std::cin >> ch2;
    
    //c
    ch3 = ch1 - 1;
    std::cout << int(ch3) << " - " <<
    std::oct << int(ch3) << " - " <<
    std::hex << int(ch3) << std::dec << " - ";

    int(ch3) < 32 || int(ch3) > 126 ? (std::cout << "_") : (std::cout << ch3);
    std::cout << std::endl;

    //d
    ch3 = ch2 - 1;
    printf("%d - ", ch3);
    printf("%o - ", ch3);
    printf("%x - ", ch3);
    int(ch3) < 32 || int(ch3) > 126 ? printf("_") : printf("%c", ch3);
    std::cout << std::endl;

    //e
    ch3 = isupper(ch1) ? 'A': ' ';
    std::cout << ch3 << std::endl;

    //e
    ch3 = islower(ch2) ? 'a': ' ';
    std::cout << ch3 << std::endl;

    //g
    ch3 = isdigit(ch1) || isdigit(ch2) ? '1': ' ';
    std::cout << ch3 << std::endl;
    return 0;   
}
