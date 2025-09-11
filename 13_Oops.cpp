#include <iostream>
using namespace std;
class MyClass
{                    // class
public:              // access specifier
    int myNum;       // attribute int variable
    string myString; // attribute string variable
};

// method inside class
class MyClass2
{
public:
    void myMethod()
    {
        cout << "Hello World";
    }
};

class MyClass3
{
public:
    void myMethod();
};

void MyClass3::myMethod()
{
    cout << "Hello World!";
}

int main()
{
    MyClass myObj;

    myObj.myNum = 18;
    myObj.myString = "BOOYAH!";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    MyClass2 myObj2;
    myObj2.myMethod();
    cout << endl;

    MyClass3 myObj3;
    myObj3.myMethod();
    return 0;
}