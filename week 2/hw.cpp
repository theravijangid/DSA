#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void findMissing(int *a,int n) {
    // visited method
    // for(int i=0; i<n; i++) {
    //     int index = abs(a[i]);
    //     if(a[index - 1] > 0) {
    //         a[index - 1] *= -1;
    //     }
    // }
    // // for(int i=0; i<n; i++) {
    // //     cout<<a[i]<<" ";
    // // }
    // // all +ve
    // for(int i=0; i<n; i++) {
    //     if(a[i] > 0) {
    //         cout<<i+1<<" ";
    //     }
    // }


    // SORTING + SWAPPING METHOD
    int i =0;
    while(i<n) {
        int index = a[i] - 1;
        if(a[i] != a[index]){
            swap(a[i], a[index]);
        }
        else {
            i++;
        }
    }
    // for(int i=0; i<n; i++) {
    //     cout<<a[i]<<" ";
    // }
    for(int i=0; i<n; i++) {
        if(a[i] != i+1) {
            cout<<i+1<<" ";
        }
    }
}

int main() {
    // SORT LEETCODE 75
    // vector<int> arr{1,1,0,2,0,1,2,0,1};

    // int s=0;
    // int e = arr.size() -1;
    // int i=0;
    // while(i<=e) {
    //     if(arr[i] == 0) {
    //         swap(arr[s], arr[i]);
    //         i++;
    //         s++;
    //     }
    //     else if(arr[i] == 1) {
    //         i++;
    //     }
    //     else{
    //         swap(arr[i], arr[e]);
    //         e--;
    //     }
    // }


    // SORT -ve and +ve
    // vector<int> arr{1,2,3,-1,-2,6,4};

    // int i=0;
    // int s=0;
    // int e=arr.size()-1;

    // while(i<=e) {
    //     if(arr[i] < 0) {
    //         swap(arr[i], arr[s]);
    //         i++;
    //         s++;
    //     }
    //     else {
    //         i++;
    //     }
    // }
    
    // ANOTHER SOL:- DUTCH FLAG ALGO APPROACH USING 2 POINTERS
    // vector<int> arr{1,2,3,-1,-2,0,6,4};
    // int l=0;
    // int h=arr.size()-1;
    // while(l<h) {
    //     if(arr[l] < 0) {
    //         l++;
    //     }
    //     else if(arr[h] > 0) {
    //         h--;
    //     }
    //     else{
    //         swap(arr[l], arr[h]);
    //     }
    // }

    // SORT 0 & 1
    // vector<int> arr{1,1,0,0,1,0};
    // int l=0;
    // int h=arr.size()-1;
    // while(l<h) {
    //     if(arr[l] == 0) {
    //         l++;
    //     }
    //     else if(arr[h] == 1) {
    //         h--;
    //     }
    //     else{
    //         swap(arr[l], arr[h]);
    //     }
    // }
    // for(auto val:arr) {
    //     cout<<val<< " "; 
    // }


    // 287. LEETCODE - FIND THE DUPLICATE NUMBER
    // sorting
    // vector<int> arr{3,2,1,2}; 
    // sort(arr.begin(), arr.end());

    // for(int i=0; i<arr.size()-1; i++) {
    //     if(arr[i] == arr[i+1]) {
    //         cout<<arr[i];
    //         return arr[i];
    //     }
    // }
    // return -1;


    // Visited solution by marking -ve
    // vector<int> arr{3,2,1,2};
    // int ans = -1;
    // for(int i=0; i<arr.size(); i++) {
    //     int index = abs(arr[i]);

    //     // already visited
    //     if(arr[index] < 0) {
    //         ans= index;
    //         break;
    //     }

    //     //visited mark
    //     arr[index] = arr[index] * -1;
    // }
    // cout<<ans;
    // return ans;


    // positioning method
    // vector<int> arr{3,3,1,2};
    // while(arr[0] != arr[arr[0]]){
    //     swap(arr[0], arr[arr[0]]);
    // }
    // cout<<arr[0];
    // return arr[0];


    //  MISSING ELEMENTS FROM AN ARRAY WITH DUPLICATES
    // int a[] = {1,4,3,4};
    // int n;
    // n = sizeof(a)/sizeof(int);
    // findMissing(a,n);


    // FIND FIRST REPEATING ELEMENT IN ARRAY    
    // int a[] = {1,2,3,3,4,4};
    // int n = sizeof(a)/sizeof(int);
    // for(int i=0; i<n; i++) {
    //     bool isRepeated;
    //     for(int j=i+1; j<n; j++) {
    //         if(a[i] == a[j]) {
    //             cout<<a[i+1]<<" ";
    //             isRepeated = true;
    //         }
    //     }
    //     if(isRepeated) break; 
    // }

    return 0;
    
}