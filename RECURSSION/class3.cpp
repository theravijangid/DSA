#include<iostream>
#include<vector>
using namespace std;

bool sortedOrNot(int arr[], int n, int i) {
    if(i == n - 1  ) return true;
    
    if(arr[i + 1] < arr[i]) {
      return false;  
    } 
    return sortedOrNot(arr, n, i+1);
}

int findTarget(vector<int>   arr, int start, int end, int target) {
    //B.C 
    if(start > end) return -1;
    int mid = (start + end) /2;

    if(arr[mid] == target) return mid;

    // RR
    // if(target < arr[mid]) {
    //     return findTarget(arr, start, mid - 1, target); 
    // } 
    // else {
    //     return findTarget(arr, mid  + 1, end, target); 
    // }

    return (target < arr[mid]) ? findTarget(arr, start, mid - 1, target) : findTarget(arr, mid  + 1, end, target);
    
}

int main() {
    // given array sorted or not
    // int arr[5] = {10,2,3,4,5};
    // int n = 5, i = 0;

    // bool isSorted = sortedOrNot(arr, n, i);
    // if(isSorted) {
    //     cout<<"array is sorted"<< endl;
    // }
    // else {
    //     cout<<"array is not sorted"<< endl;
    // }


    // BINARY SERACH USING RECURSSION
    vector<int> arr = {1,2,3,4,5,15};
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int target = 15;
    int ans = findTarget(arr, start, end, target);
    cout<<"Answer is : "<< ans << endl;
    return 0;
}