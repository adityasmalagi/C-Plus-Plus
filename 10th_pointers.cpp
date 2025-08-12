#include<iostream>
#include<vector>
using namespace std;

/*  & for - bitwise OR
           - address of
           - alias
           
    * for   - multiply
            - dereference    */


void changeA(int* ptr){       // pass by reference using pointers
    *ptr = 20;             // reference (alias)
}

void changeA(int &b){
    b = 20;                // pass by refernce using alias
}

int main(){
    int a = 10;
    int *ptr = &a;

    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;     // it is a ptr address

cout << endl;
    //pointer to pointer

    int **parPtr = &ptr;     //parent pointer
    cout << &ptr << endl;
    cout << parPtr << endl;

cout << endl;
    // * -> dereference operator   ---> value at address  *(&a)

    cout << *(&a) << endl;
    cout << *ptr << endl;
    cout << *parPtr << endl;
    cout << **parPtr << endl;

cout << endl;
    // Null pointer 

    int *ptr2 = NULL;
    cout << ptr2 << endl;      // we can't derefence the null pointer

cout << endl;

// pass by refernce
    
    int b = 5;
    changeA(&b);   // we can change by passing a address

    cout << "inside main fnx : " << b << endl; // 20
    changeA(b);


    // array pointer 
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;
    cout <<  *arr << endl;        //pointer => 1

    cout << *arr +3 << endl;
cout << endl;
    // pointer arithmetic

    int c = 10;
    int *ptr3 = &c;
 
    cout << ptr3 << endl;
    ptr3++;
    cout << ptr3 << endl; 
    ptr3 = ptr3 + 2;
    cout << ptr3 << endl;
cout << endl;

// substract ptr
    int *ptr4;     /// 100
    int *ptr5 = ptr4 + 2;     // 108

    cout << ptr5 - ptr4 << endl;   //2
cout<<endl;

    // compare
    int *ptr6;
    int *ptr7 = ptr6;

    cout << ptr6 << endl;
    cout << ptr7 << endl;

    cout << (ptr6 == ptr7) << endl;  // 1
    cout << "Hello world" << endl;
    return 0;
} 