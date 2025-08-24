#include <iostream>
using namespace std;

// function definition 
void printHello(){
    cout << "hello\n";
}

int printhello(){
    cout << "hello\n";
    return 5;
}

int sum(int a, int b){
    int s = a + b;
    return s;
} 
int minofTwo(int a , int b){
    if(a < b ){
        return a;
    }else{
        return b;
    }
}

int sumN(int n){
    int sum = 0;

    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int factorialN(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int sumc(int a, int b){
    a = a + 10;
    b = b + 10;
    return a+b;
}

int sumOfDigits( int numq){
    int digSum =0;

    while(numq > 0){
        int lastDig = numq % 10;
        numq /= 10;
        digSum += lastDig;
    }
    return digSum;  
} 

int factorial(int nq){
    int facto = 1;

    for(int i=1;i<=nq;i++){
        facto *=i;
    }
    return facto;
}

int nCr(int nq,int r){
    int facto_nq = factorial(nq);
    int facto_r = factorial(r);
    int facto_nmr = factorial(nq-r);

    return facto_nq / (facto_r * facto_nmr);
}

int prime(int v){
    for(int i =1;i<=v;i++){
    if(v % i ==0){
        cout << "it is prime = "<< v << endl;
        i++;
    }else{
        cout << "it is not prime";
    }
    cout << endl;
}

}

void myFunction(string fname){
    cout << fname << " Refsnes\n";
}

int main(){
    //function call/invoke
    printHello();
    int val = printhello();
    cout << "val = " << val << endl;
    cout << "hello world " << endl;

    cout << sum(1,2) << endl;        //sum in function

    cout << "min  = " << minofTwo(5,8) << endl;

// redundancy - means unnessary repetition in code

cout << sumN(5) << endl;
cout << sumN(10) << endl;
cout << endl;

cout << factorialN(3) <<endl;

int a = 5, b = 4;
cout << sumc(a,b) << endl;

cout << a << endl;     // pass by value   //pass by reference comes in pointer
cout << b << endl;

cout << "sum = " << sumOfDigits(2356) <<endl;
cout << endl;

int nq = 6, r = 3;
cout << nCr(nq,r) << endl;

cout << prime(6) << endl;

cout << endl;

myFunction("Liam");
myFunction("Jenny");
myFunction("Anja");

    return 0;
}
