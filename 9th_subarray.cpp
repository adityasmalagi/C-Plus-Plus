#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for(int i =0 ; i<n;i++){
        for(int j = i+1;j<n;j++){
            if (nums[i] + nums[j] ==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

vector<int> pairSum2(vector<int> nums2, int target2){
    vector<int> ans2;
    int n = nums2.size();

    int i = 0 , j = n-1;

    while(i < j){
        int pairSum2 = nums2[i] + nums2[j];
        if(pairSum2 > target2){
            j--;
        }else if (pairSum2 < target2) {
         i++;
        }else{
            ans2.push_back(i);
            ans2.push_back(j);
            return ans2;
        }
    }
    return ans2;
}
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    for(int st =0 ;st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i<= end;i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    // Maximum subarray sum
    int n2 = 5;
    int arr2[5] = {1,2,3,4,5};

    int maxSum = INT_MIN;

    for (int st = 0 ; st<n2;st++){
        int currSum =0 ;
        for(int end = st; end<n2;end++){
            currSum += arr2[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "max subarray sum = " << maxSum << endl;

    vector<int>nums = {2,7,11,15};
    int target = 9;

    vector<int>ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

cout << endl;


    vector < int> nums2 = {2,7,11,15};
    int target2 = 26;

    vector < int > ans2 = pairSum2(nums2, target2);
    cout << ans2[0] << ", " << ans2[1] << endl;

    return 0;   


}