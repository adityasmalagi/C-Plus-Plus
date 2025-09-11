#include <iostream>
#include <functional> // Needed for std:: function
using namespace std;

void myFunction(function<void()> func)
{
    func();
    func();
}

int main()
{
    auto message = []()
    {
        cout << "Hello World!\n";
    };

    // lambda with parameters
    auto add = [](int a, int b)
    {
        return a + b;
    };

    message();
    cout << add(3, 4) << endl;
    myFunction(message);

    for (int i = 1; i <= 3; i++)
    {
        auto show = [i]()
        {
            cout << "Number : " << i << endl;
        };
        show();
    }

    int i = 10;
    auto show = [i]() { // You can use the [ ] brackets to give a lambda
        cout << i;      // access to variables outside of it.
    }; // This is called the capture clause.}
    show();
    cout << endl;

    // capture by refernce
    int x = 30;
    auto show2 = [x]()
    {
        cout << x;
    };

    x = 20;
    show2();
    return 0;
}