#include <iostream>
#include <string>
using namespace std;

class Teacher{
    // properties attributes
private:
    double salary;

public:
    Teacher() {
    cout << "HI , I am constructor\n";
    }
    string name;
    string dept;
    string subject;

    //parameterized
    Teacher(string name, string dept, string subject , double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj){
        cout << "i am custom copy constuctor...\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // methods or member function
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout << "name :" << name << endl;
        cout << "subject : " << subject << endl;
    }
    
    //setter
    void setSalary(double s){
        salary = s;
    }

    //getter
    double getSalary(){
        return salary;
    }
};

class Student{
public:
    string name;
    int rollno;
    int age;
};

class Account{
private:
    double balance;
    string password;  // data hiding

public:
    string accountID;
    string username;
};

class Student2{
public:
    string name;
   // double cgpa;   for hallow copy
   double* cgpaPtr;

    Student2(string name, double cgpa){
        this->name = name;
       // this->cgpa = cgpa;     for hallow copy
       cgpaPtr = new double;
       *cgpaPtr = cgpa;
    }
    Student2(Student2 &obj){
        this->name = obj.name;
        //this->cgpa = obj.cgpa;
        this->cgpaPtr = obj.cgpaPtr;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << "name : " << name << endl;
        //cout << "cgpa : " << cgpa << endl;      // for hallow copy
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main(){
    // Teacher t1;   // internally calling the constructor
    // Teacher t2;
    // t1.name = "Aditya";
    // t1.dept = "ECE";
    // t1.subject = "VLSI";
    // t1.setSalary(25000);
    Teacher t1("Shradha", "ComputerScience", "c++", 25000);
    t1.getInfo();
    
    Teacher t2(t1); // default copy constructor  --invoke
    t2.getInfo();
    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

cout << endl;

    Student2 s1("rahul kumar", 8.9);
    s1.getInfo();
    Student2 s2(s1);
    s2.getInfo();

    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "neha";
    s2.getInfo();
    return 0; 
    
}