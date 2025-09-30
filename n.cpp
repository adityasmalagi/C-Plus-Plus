#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    int arr[3];

    for(int i =0;i<=n;i++){
        sum = 0;
        for(int j =0;j <= 3;j++){
            cin >> arr[j];
            sum += arr[j];
        }
        if(sum >= 2){
            count++;
        }
    }
    
    cout <<count << endl;
    cout << "hello" << endl;
    return 0;
}

