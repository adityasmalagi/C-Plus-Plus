#include <iostream>
using namespace std;

/*class Student{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // destructor
    ~Student(){
        cout << "hi , i delete everything\n";
        delete cgpaPtr;    // we use because of memory leak
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};     */

// for inheritance topic

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
      this->name = name;
      this->age = age;
    }
   //Person(){
     //   cout << "parent constructor..." << endl;
   //}
};
 
class Student : public Person{
public:
    int rollno;

    Student(string name,int age , int rollno) : Person(name,age){
        this-> rollno = rollno;
    }

    //Student3(){
     //   cout << "child constuctor.. \n";
    //}
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll no : " << rollno << endl;
    }
};

int main(){
    Student s1("rahul kumar", 21, 1234);
    s1.getInfo();

   /* Student2 s2;
    s2.name = "Aditya Malagi";
    s2.age = 20;
    s2.rollno = 1234;
    s2.getInfo();          */

    //Student3 s3("ranga bannaji", 1233);
   // s3.getInfo();
    return 0;
}