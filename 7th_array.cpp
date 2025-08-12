#include <iostream>
#include <climits>
using namespace std;

void changeArr(int arr[],int size3){
    cout << "in function\n";
    for(int i = 0;i< size3; i++){
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[],int sz, int target){
    for(int i = 0; i < sz;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[], int sz){
    int start = 0, end = sz -1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int marks[5] = {99,100,67,88,98};
    int size = 5;
    cout << marks[3] << endl;
    cout << sizeof(marks) / sizeof(int) << endl;
    cout << endl;


    for(int i =0;i<5;i++){
        cout << marks[i] << endl;
    }

    int nums[] = {5,15,22,1,-15,34};
    int size2 = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i =0;i<size2;i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);

    // OR   if(nums[i] < smallest){
        //     smallest = nums[i];
        // }
    }
    
    cout << "the smallest = " << smallest << endl;
    cout << "the largest = " << largest << endl;
    cout << "hello world" << endl;
    
    // int size3 = 5;
    // int marks2[size3];

    // for(int i = 0;i< size3;i++){
    //     cin >> marks2[i];
    // }

    // for(int i =0; i< size3; i++){
    //     cout << marks2[i] << endl;
    // }
    int arr[] = {1,2,3};
    changeArr(arr, 3);
    cout << "in main\n";
    for(int i = 0; i<3 ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[] = {4, 2,7,8,1,2,5};
    int sz = 7;
    int target = 5;

    cout << linearSearch(arr2,sz,target) << endl;


    int arr3[] = {4, 2,7,8,1,2,5};
    int sz2 = 7;

    reverseArray(arr3, sz2);

    for(int i =0;i<sz2;i++){
        cout << arr3[i] << " ";
    }
    cout << endl;


    int arr4[] = {4, 2,7,8,1,2,5};
    int sz3 = 7;
    int sum = 0;
    int product = 1;

    for(int i =0;i < sz3;i++){
       sum += arr4[i];
       product *= arr4[i];
    }

    cout << "the total sum of arr : " << sum << endl;
    cout << "the product is :  " << product << endl;
    return 0;
}