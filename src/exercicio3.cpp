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

    
    return 0;
}