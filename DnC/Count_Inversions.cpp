#include<iostream>
#include<vector>
using namespace std;

int method1(vector<int>&arr) {
    int count = 0;
    for(int i=0; i<arr.size(); i++) {
        for(int j=i+1; j<arr.size(); j++) {
            count = arr[i] > arr[j] ? count+1 : count;
        }
    }
    return count;
}

long merge(vector<int> arr, vector<int> temp, int start, int mid, int end) {
    int i=start, j=mid + 1, k=start;
    long c = 0;
    while(i<=mid && j<=end) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            c+= mid - i + 1;
        }
    }

    while(i<=mid) {
        temp[k++] = arr[i++];
    }
    while(j <= end) {
        temp[k++] = arr[j++];
    }

    while(start <= end) {
        arr[start] = temp[start];
        start++;
    }
    return c;
}

long mergerSort(vector<int> arr, vector<int> temp, int start, int end) {
    // base case
    if(start >= end) return 0;

    int mid = start + (end - start)/2;
    // int mid = (start + end) >> 1;  // same as divide by two
    long c = 0;
    c += mergerSort(arr, temp, start, mid);
    c += mergerSort(arr, temp, mid + 1, end);
    c += merge(arr, temp, start,mid, end);
    return c;
}

long countInversions(vector<int> arr) {
    long c = 0;
    vector<int> temp(arr.size(), 0);
    c = mergerSort(arr, temp, 0, arr.size()-1);
    return c;
}

int main() {
    vector<int> arr = {8,4,2,1};

    // method 1 soln T.C = O(n^2)
    // cout<< "Inversion count is : "<< method1(arr) << endl;
    

    // method 2 O(nlogn) using merge sort
    long ans = countInversions(arr);
    cout << ans << endl;

    return 0;
}