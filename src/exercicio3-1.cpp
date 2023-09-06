#include <iostream>
using namespace std;
int main (void){
    char ch1, ch2, ch3,nch;
    nch = '_';
    cout << "Digite dois caracteres:" << endl;
    cin >> ch1 >> ch2;
    ch3 = ch1 - 1;
    cout << "Dec" <<"\tOct" <<"\tHex" <<"\tChar" << endl;
    cout << dec<<(int)ch3 <<"\t" << oct << (int)ch3 <<"\t" << hex << (int)ch3 <<"\t" 
    << ((int(ch3) <= 32 || int(ch3) > 126)?'_': ch3) << endl;

    //e
    isupper(ch1)? ch3='A' : ch3= ' ';
    cout << "Ch3 = " <<ch3 << endl;

    //f
    islower(ch2)? ch3='a' : ch3= ' ';
    cout << "Ch3 = " <<ch3 << endl;

    //g
    (isdigit(ch1)||isdigit(ch2))? ch3='1' : ch3= ' ';
    cout << "Ch3 = " <<ch3 << endl;




   

    return 0;
}
