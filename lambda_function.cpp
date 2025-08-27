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
    return 0;
}