#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 1; i<= n;i++){               //coloums
        for(int i = 1; i<=n;i++){
            cout << i;                //for rows
        }
        cout << endl;  
    }
    cout << endl;


    // print abcd

    int n2 = 4;
    for(int i = 0;i< n2;i++){
        char ch = 'A';
        for(int i = 0;i<n2;i++){
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;

    //print number 
    int n3 = 3;
    int num = 1;
    for (int i=0;i<n3;i++){
        for(int i = 1;i<=n3;i++){
            cout << num ;
            num++;
        }
        cout << endl;
    }
    cout << endl;

    // abcd
    int b= 3;
    char c = 'A';
    for(int i = 0;i<b;i++){
        for(int i = 0;i<b;i++){
            cout << c;
            c += 1;
        }
        cout << endl;
    }
// Tringle Pattern 

int a = 4;
for(int i = 0;i<a;i++){              //rows
    for(int j =0;j<i+1;j++){                      // coloums
        cout << "*";
    }
    cout << endl;
}

int n4 = 4;
for(int i = 0; i < n4;i++){
    for(int j =0;j < i+1;j++){
        cout << (i+1);
    }
    cout << endl;
}

int n5 =4;
for(int i =0; i< n5;i++){
    for(int j= 1;j< i+1;j++){
        cout << j;
    }
    cout << endl;
}

int n6 = 6;
for(int i = 0; i<n6 ;i++){
    for(int j =i-1;j>0;j--){
        cout << j;
    }
    cout << endl;
}

int n7 = 4;
int num2 =1;
for(int i = 0; i< n7;i++){
    for(int j = 0;j< i+1;j++){
        cout << num2;
        num2++;
    }
    cout << endl;
}
cout << endl;

int n8 = 4;
char ch = 'A';
for(int i = 0;i< n8;i++){
    for(int j = 0;j < i+1;j++){
        cout << ch;
        ch++;
    }
    cout << endl;
}


int n9 = 4;
int num3 = 1;
for(int i =0;i<n9;i++){
    //space
    for(int j=0;j<i;j++){
        cout << " ";
    }
    for(int j= 0;j<n9-1;j++){
        cout << (i+1);
    }
    cout << endl;
}

// for pyramid

int s = 9;
for(int i = 0; i< s;i++){
    // spaces : n-i-1
    for(int j = 0;j < s-i-1;j++){
        cout << " ";
    }
    // nums1 : i+1
    for(int j=1;j<=i+1;j++){
        cout << j;
    }
    // num2
    for(int j=i;j>0;j--){
        cout << j;
    }
  cout << endl;
}
  
// hollow diamond pattern

int m =4;
// top 
for(int i=0; i<m;i++){
    //space
    for(int j=0; j<m-i-1 ; j++){
        cout << " ";
    }
    cout <<"*";

    if(i != 0){
        //space
        for(int j=0;j<2*i-1;j++){
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
}

// bottom
for(int i =0;i<m-1;i++){
    //space
    for(int j=0;j<i+1;j++){
        cout << " ";
    }
    cout << "*";
     
    if(i != m-2){
        //space
        for(int j=0;j<2*(m-i)-5;j++){
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
}
    return 0;
}