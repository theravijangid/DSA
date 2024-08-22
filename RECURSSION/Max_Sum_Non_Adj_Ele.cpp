#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


void solve(vector<int>& arr, int i, int sum, int &maxi ) {
    // BASE CASE
    if(i >= arr.size()) {
        maxi = max( maxi, sum);
        return;
    }   

    // Include // Inclusion
    solve(arr, i + 2, sum + arr[i], maxi);

    // Exclude
    solve(arr, i + 1, sum, maxi);
}

int main() {
    vector<int> arr{1,2,4,9};
    int maxi = INT_MIN, sum = 0, i = 0;
    solve(arr, i, sum, maxi);
    cout<<"Maximum sum of non adjacent element is : " << maxi << endl;

    return 0;
}