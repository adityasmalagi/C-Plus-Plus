#include <iostream>
using namespace std;
int main(){
     int a = 4, b= 8;
     cout << (a & b) << endl;

     cout << ( a | b ) << endl;
     cout << ( a ^ b ) << endl;
     cout << ( 4<< 1) << endl;
     cout << ( 10 << 2) << endl;
     cout << ( 10 >> 1) << endl;
     cout << (6 & 10) << endl;
     cout << (6 | 10) << endl; 
cout << endl;

//  data types modifiers
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(short int) << endl;

/* all the int and float we are using are *****signed***** type that are positive
and negetive also  */


unsigned int x = -10;
cout << x << endl;


    return 0;
}