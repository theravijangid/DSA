// CUTTING ROD TO GET MAXIMUM SEGMENTS OUT OF IT

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int> arr, int n) {
    // B.C
    if(n == 0 ) return 0;
    if( n < 0) return INT_MIN;

    // RR
    int maxi = INT_MIN;
    for(int i =0; i<arr.size(); i++) {
        int ans = solve(arr, n - arr[i]);
        maxi = max(maxi, ans + 1);
    }
    return maxi;
}


// LOVE BHAIYA KA CODE
int solve2(int n, int x, int y, int z) {
    // BASE CASE
    if(n == 0) {
        return 0;
    }
    if(n < 0) {
        return INT_MIN;
    }

    // RR
    int ans1 = solve2(n-x, x, y, z) + 1;
    int ans2 = solve2(n-y, x, y, z) + 1;
    int ans3 = solve2(n-z, x, y, z) + 1;

    int ans = max(ans1, max(ans2, ans3));
    return ans;
}



int main() {
    // int n = 7;
    // vector<int> arr{5,2,2};
    // int ans = solve(arr, n);

    int n = 7;
    int x = 5, y = 2, z = 2;
    int ans = solve2(n, x, y, z);
    if(ans < 0) {
        // cout<<"Inside";
        ans = 0;
    }
    cout<<"Answer is : "<< ans << endl;

    return 0;
}