#include<iostream>
#include<vector>
using namespace std;

int helpRobber(vector<int>&nums, int i) {
    // B.C
    if(i >= nums.size()) return 0;

    // soln for case 1
    int robAmt1 = nums[i] + helpRobber(nums, i + 2);
    int robAmt2 = 0 + helpRobber(nums, i + 1); 
    
    return max(robAmt1, robAmt2);
}

int main() {
    vector<int> nums = {2,1,1,2};
    int i = 0;
    int ans = helpRobber(nums, i);
    cout<< ans << endl;

    return 0;
}