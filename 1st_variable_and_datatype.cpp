#include <iostream>         //boilerplate code --except cout
using namespace std;

int main(){
    cout << "heloo world" << "\n";

    int age;
    age = 17;
    if (age > 18){
        cout << "your a major" << "\n";
    }else{
        cout << "your a minor" << "\n";
    }

 
    int age2 = 25;
    cout << sizeof(age2) << endl;

    char grade = 'a';
    int value = grade;
    cout << value << "\n";

    double price = 100.99;
    int newprice = (int)price;
    cout << newprice << endl;

    int age3;
    cout << "Enter the age : ";
    cin >> age3;

    cout << "your age is : " << age3 << "\n";
    
    int a = 5, b = 10;
    // int sum = a + b;

    cout << "sum = " << (a+b) << endl;
    cout << "substract = " << (a-b) << endl;
    cout << "divide = " << ( a / b) << endl;
    cout << "multiple = " << (a * b) << endl;

    int a2 = 11;
    float b2 = 4;
    cout << (a2/b2) << endl;

    cout << (5/(double)2) << endl;
    cout << (5< 3) << "\n";
    cout << !(5< 3) << "\n";

    cout << ( (3>2) || (3> 5)) << endl; // in OR if 1 is true means true only
    cout << ( (3>2) && (3> 5)) << endl;  // in and if 2 should be true means true
    
    return 0;

    
}
