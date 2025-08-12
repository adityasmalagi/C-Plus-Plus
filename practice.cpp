#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
    int facto = 1;
    
    for(int i = 1; i< n;i++){
        facto *= i;
    }
    return facto;
}
int printhello(){
    cout << "hello\n";
    return 5;
}

void myFunction(){
    cout << "I just got exeuted!";

}

int main(){
    cout << "hello world" << endl;
    
    int age;
    age = 17;
    if (age > 18){
        cout << "your a major" << endl;
    }else{
        cout << "your a minor" << endl;
    }

    char grade  = 'A';
    int value = grade;
    cout << value << "\n";

    int age2 = 25;
    cout << sizeof(age2) << endl;

    // int age3;
    // cout << "enter the age: ";
    // cin >> age3;
    // cout << "the age is :  "  << age3 << endl;
    cout << (5/(float)2) << endl;

    cout << !(5 < 3) << endl;

    int n = 23;
    cout << (n > 0 ? "positive"  : "negetive") << endl;

    int n4 = 4;
    for(int i = 1;i <=n4 ;i++){
        int m = 10;
        for (int i = 1;i<=m;i++){
            cout << "*" ;
        }
        cout << endl;
    }
    int a = 4;
    for(int i = 0 ;i<a ; i++){
        for(int j = 0;j < i+1;j++){
            cout << "*";

        }
        cout << endl;
    }
printhello();
cout << factorial(3) << endl;

cout << endl;
cout << sqrt(64) << endl;
cout << round(2.6) << endl;
cout << log(2) << endl;

cout << endl;

// switch statments
int day = 2;
switch(day){
    case 1 :
    cout << "Monday" << endl;
     break;
    case 2:
    cout << "tuesday" << endl;
     break;
    case 3:
    cout << "wednesday" << endl;
}

for(int i = 1; i <= 3; i++){
    for(int j = 1;j<=3;j++){
        cout << i*j << " ";
    }
    cout << "\n";
}

// for each loop
int myNumbers[5] = {10,20,30,40,50};
for (int i : myNumbers){
    cout << i << endl;
}
cout << endl;

// loop through a string
string word = "hello";
for (char c : word){
    cout << c ;
}
cout << endl;

for (int i = 1; i <= 10; i = i + 2) {
  cout << i << " ";
}
cout << endl;

int myNumbers2[5] = {10,20,30,40,50};
for (int i = 0; i < sizeof(myNumbers2)/sizeof(myNumbers2[0]);i++){
    cout << myNumbers2[i] << endl;
}

cout << endl;

//loop through a multi dimensional array

string letters[2][4] = {
    { "A","B","C","D"},
    {"E","F","G","H"}
};

for (int i = 0;i < 2;i++){
    for (int j =0;j < 4;j++){
        cout << letters[i][j] << " ";
    }
}
cout << endl;

// structure

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable

myStructure.myNum = 1;
myStructure.myString = "Hello World!";

cout << myStructure.myNum << endl;
cout << myStructure.myString << endl;

// creating refernces
                                 // & it is used for refernce
string food = "pizza";
string &meal = food;     //refernce to food


cout << food << "\n";
cout  << meal << "\n";

cout << endl;
// deferncence

string car = "bmw";
string* ptr = &food;

cout << ptr << endl;
cout << *ptr << endl;

// function 


myFunction();
cout << 101/2 << endl;
return 0;

}