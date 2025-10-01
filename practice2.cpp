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

   do{
    cout << "hello world " << endl;
   }while (3 > 5);


   int v = 10;
   int j = 1;
   do{
    cout << j << " ";
    j++;
   }while(j <= v);

   int n2 = 4;
   for(int i =0; i <= n2;i++){
    for(int i = 1;i <= n2;i++ ){
        cout << i;
    }
    cout << endl;
   }

   int n3 = 4;
   for(int i = 0; i <=n3;i++){
    char ch = 'A';
    for(int i =0;i <=n3;i++){
        cout << ch;
        ch += 1;
    }
    cout << endl;

   }
cout << endl;

   int n4 = 3;
   int num = 1;
   for(int i =0;i< n4;i++){
    for(int i = 1;i <=n4;i++){
        cout << num;
        num++;
    }
    cout << endl;
   }

cout << endl;

   int n5 = 3;
   char ch = 'A';
   for (int i = 0; i< n5;i++){
    for(int i = 1 ; i<= n5;i++){
        cout << ch;
        ch++;
    }
    cout << endl;
   }
cout << endl;

   int a2 = 4;
   for(int i = 0; i<a2;i++){
    for (int j = 0;j <i+1;j++){
        cout << (i+1);
    }
    cout << endl;
   }
cout << endl;

   int b = 6;
   for (int i =0;i<b;i++){
    for(int j= i-1;j>0;j--){
        cout << j;
    }
    cout << endl;
   }
cout << endl;
   int c = 4;
   int nu = 1;
   for (int i =0;i< c;i++){
    for(int j = 0;j<i+1;j++){
        cout << nu;
        nu++;
    }
    cout << endl;
   }
cout << endl;

   int n6 = 4;
   char ch2 = 'A';
   for (int i =0;i< n6;i++){
    for(int j = 0;j<i+1;j++){
        cout << ch2;
        ch2++;
    }
    cout << endl;
   }
cout << endl;

int m = 4;
for(int i = 0;i<m;i++){
    for(int j =0;j<m-i-1;j++){
        cout << " ";
    }
    cout << "*";

    if(i != 0){
        for (int j =0;j< 2*i-1;j++){
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
}

for(int i =0;i<m-1;i++){
    for(int j = 0;j<i+1;j++){
        cout << " ";
    }
    cout << "*";

    if(i != m-2){
        for(int j =0;j<2*(m-i)-5;j++){
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
}
    return 0;
}