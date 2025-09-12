#include<iostream>
#include<string>
using namespace std;


// multi- level inheritance
class Person{
public:
     string name;
     int age;
};

class Student : public Person{
public:
    int rollno;
};

class GradStudent : public Student{
public:
    string researchArea;
};

// multiple inheritance

class Student2{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student2 , public Teacher {

};

// hierarchial inheritance

class Person2{
public:
    string name;
    int age;
};

class Student3 : public Person2{
public:
    int rollno;
};

class Teacher2 : public Person2{
public:
    string subject;
};

// polymorphism

class Student4{
public:
    string name;

    Student4(){
        cout << "non-parameterized" << endl;
    }

    Student4(string name){
        this->name = name;
        cout << "parameterized" << endl;
    }
};

// function overriding 

class Parent3{
public:
    void getInfo(){
        cout << "parent class\n ";
    }
};

class Child : public Parent3{
public:
    void getInfo(){
        cout << "child class\n";
    }
};

// abstract classes

class Shape{
    virtual void draw() = 0;  // pure virtual function
};

class Circle : public Shape{
public:
    void draw(){
        cout << "drawing a circle\n";
    }
};

// for static keywords
void fun(){
    static int x =0; // init statment -1 run 
    cout << "x : " << x << endl;
    x++;
}

// static keywords with class
class A{
public:
    int x;

    void incX(){
        x = x + 1;
    }
};

// static objects 

class ABC{
public:
    ABC(){
        cout << "constructor\n";
    }

    ~ABC(){
        cout << "destructor\n";
    }
};

int main(){
    //multi-level inheritance
    GradStudent s1;
    s1.name = "tony stark";
    s1.researchArea = "quantum physics";
    cout << s1.name << endl;
    cout << s1.researchArea << endl;

cout << endl;
    // multiple inheritance
    TA t1;
    t1.name = "tony stark";
    t1.subject = "engineering";

    cout << t1.name << endl;
    cout << t1.subject << endl;

cout << endl;
    // hierarchial inheritance
    Teacher2 l1;
    l1.name = "sai";
    l1.subject = "electronics";
    l1.age = 20;

    cout << l1.name << endl;
    cout << l1.subject << endl;
    cout << l1.age << endl;

cout << endl;

    //polymorphism

    Student4 a1;  // non parameterized
    //Student4 a1("tony stark");  //papameterized

cout << endl;

    // function overriding 
    Child c1;
    c1.getInfo();

    Parent3 p1;
    p1.getInfo();

cout << endl;

    //abstract classes
    Circle C1;
    C1.draw();
cout << endl;

    // static keywords
    fun();
    fun();
    fun();
cout << endl;

    // in class static keywords
    A obj;
    obj.x = 0;
    cout << obj.x << endl;
    obj.incX();
    cout << obj.x << endl;

  // static objects
   if(true){
    static ABC obj;
   }

   cout << "end of main fnx\n";
    return 0;
}
