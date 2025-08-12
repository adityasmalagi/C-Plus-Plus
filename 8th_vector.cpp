#include <iostream>
#include <vector>   // <bits/c++.h> in coding context
using namespace std;


/*vector can resize and dynamicaly allocation

static allocation is in compile time stores in stack 
dynamic allocation is in run time and stores in heap

two types 
1. size  -- no. of elements   || internal array double every time
2. capacity*/

int main(){
    // vector<int> vec = {1,2,3};
    // cout << vec[0];

    // vector<int> vec (5,0);
    vector<char> vec = {'a','b','c','d','e'};

    cout << "size = " << vec.size() << endl;

    for(char val : vec){    // for each loop
        cout << val << endl;
    }

    vector<int> vec2;
    cout << "size = " << vec2.size() << endl;
    vec2.push_back(25);
    vec2.push_back(35);
    vec2.push_back(45);
    vec2.push_back(55);
    vec2.push_back(65);
    cout << "after push back size = " << vec2.size() << endl;


    vec2.pop_back();

    for(int val : vec2) {
        cout << val << endl;
    }
    cout << endl;

    cout << vec2.front() << endl;
    cout << vec2.back() << endl;
    cout << vec2.at(1) << endl;
    cout << endl;
    
    // static vs dynamic allocation

    cout << "size = " << vec2.size() << endl;
    cout << "capacity = " << vec2.capacity()<< endl;

   vector <int> v1 = { 1,3,4,5,6};
   v1.insert(v1.begin(), 5);
   v1.erase(v1.begin());

   for(int i =0; i<v1.size() ; i++){
       cout << v1[i] << endl;
   }

   for (auto itr = v1.begin(); itr != v1.end(); ++itr) {
    cout << *itr << " ";             // dereference
   }

    return 0;
}