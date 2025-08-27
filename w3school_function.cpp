#include <iostream>
using namespace std;

void myFunction(string country = "Norway")
{
  cout << country << endl;
}

int myFunction2(int x)
{
  return x + 5;
}
int doubleGame(int x)
{
  return x * 2;
}
void changeValue(int &num)
{
  num = 50;
}

void swapNums(int &x, int &y)
{
  int z = x;
  x = y;
  y = z;
}
void modifyStr(string &str)
{
  str += "World!";
}
void myFunction(int myNumbers[5])
{
  for (int i = 0; i < 5; i++)
  {
    cout << myNumbers[i] << "\n";
  }
}

// pass structure to a function

struct Car
{
  string brand;
  int year;
};

void myFunction(Car c)
{
  cout << "Brand: " << c.brand << endl
       << " year : " << c.year << "\n";
}

struct components
{
  string name;
  int number;
};

void myFunction(components a)
{
  cout << "components : " << a.name << endl
       << "number : " << a.number << endl;
}

// pass by reference

struct Car2
{
  string brand;
  int year;
};

void updateYear(Car2 &c)
{
  c.year++;
}

// question using function

float toCelsius(float fahrenheit)
{
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int sum(int k)
{
  if (k > 0)
  {
    return k + sum(k - 1);
  }
  else
  {
    return 0;
  }
}

int countdown(int n)
{
  if (n > 0)
  {
    cout << n << " ";
    countdown(n - 1);
  }
}

int main()
{
  myFunction("India");
  myFunction("America");
  myFunction();

  cout << endl;
  cout << myFunction2(2) << endl;

  for (int i = 1; i <= 5; i++)
  {
    cout << "Double of " << i << " is " << doubleGame(i) << endl;
  }
  cout << endl;

  int value = 10;
  changeValue(value);
  cout << value;

  cout << endl;
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap : " << "\n";
  cout << firstNum << " " << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << " " << secondNum << "\n";
  cout << endl;

  string greeting = "Hello ";
  modifyStr(greeting);
  cout << greeting;

  // pass arrays as function parameters
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);

  Car myCar = {"Toyoto", 2020};
  myFunction(myCar);

  components items = {"arduino UNO ", 386};
  myFunction(items);

  Car2 NewCar = {"BMW", 2025};
  updateYear(NewCar);
  cout << "The " << NewCar.brand << " is now form year " << NewCar.year << "\n";

  float fahreneit = 98.8;
  float result = toCelsius(fahreneit);
  cout << "fahrenheit : " << fahreneit << "\n";
  cout << "convert Fahrenheit to celsius :" << result << endl;

  int result2 = sum(10);
  cout << result2 << endl;

  int value2 = countdown(5);
  cout << value2 << endl;
  return 0;
}
