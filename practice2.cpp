#include <iostream>
#include <fstream>
using  namespace std;

class Animal{
public:
    virtual void sound(){
        cout << "Animal sound\n";
    }
};

class Dog : public Animal{
    public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main(){
    Animal *a;
    Dog d;
    a = &d;
    a->sound();

cout << endl;
    ofstream MyFile("filename.txt");
    MyFile << "Files can be tricky, but it is fun enough!\n";
    MyFile.close();

    string myText;
    ifstream MyReadFile("filename.txt");

    while(getline (MyReadFile,myText)){
        cout << myText;
    }
    MyReadFile.close();
cout << endl;

    char cha;
    cout << "enter the letter : ";
    cin >> cha;

   if (cha >= 'a' && cha <= 'b'){
        cout << "lowercase letter" << endl;
   }else{
    cout << "uppercase letter " << endl;
   }

   int n = 12;
   cout << (n >= 0 ? "positive" : "negetive") << endl;
    return 0;
}