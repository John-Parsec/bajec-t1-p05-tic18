#include <iostream>

using namespace std;

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
    ch3 < 32 || ch3 > 126 ? cout << "'" << "_" <<"' -\t" << dec << (int)ch3 << '\t' << hex << (int)ch3 << '\t' << oct << (int)ch3 << '\t' << '\n' : cout << "'" << ch3 <<"' -\t" << dec << (int)ch3 << '\t' << hex << (int)ch3 << '\t' << oct << (int)ch3 << '\t' << '\n';

    //d)
    ch3 = ch2 - 1;
    printf("O caractere que precede o caractere %c é: %c\n", ch2, ch3);
    printf("\tDec\tHex\tOct\n");
    ch3 < 32 || ch3 > 126 ? printf("_ -\t%d\t%x\t%o\t\n", ch3, ch3, ch3) : printf("'%c' -\t%d\t%x\t%o\t\n", ch3, ch3, ch3, ch3);

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