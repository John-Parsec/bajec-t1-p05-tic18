#include <iostream>

using namespace std;

int main(void){
    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin  >> ch1;
    cout << "Digite um caractere: ";
    cin  >> ch2;

    ch3 = ch1 -1;
    cout << "Anteccessor de " << ch1 << "(" << (int)ch1<<  ")" <<": ";
    cout << "(dec)" << (int)ch3  << " | (oct)" << oct << (int)ch3 << " | (hex)" << hex << (int)ch3;
    cout << dec << endl;

    ch3 = ch2 -1;
    printf("Anteccessor de %c(%d): (dec)%d | (oct)%o | (hex)%X\n", ch2, ch2, ch3, ch3, ch3);

    
    return 0;
}