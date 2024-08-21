#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int> arr, int target) {
    // B.C
    if(target == 0) return 0;
    if(target < 0) return INT_MAX;

    // RR solve case 1
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++) {
        int ans = solve(arr, target - arr[i]);
        if(ans != INT_MAX) {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main() {
    vector<int> arr{1,2,3};
    int target = 1;
    int ans = solve(arr, target);
    cout<<"Answer is : "<< ans << endl;

    return 0;
}