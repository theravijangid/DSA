#include<iostream>
#include<vector>
using namespace std;

int main() {
    // SELECTION SORT
    // vector<int> a{5,4,3,2,1};
    // int n = a.size();

    // for(int i=0; i<n; i++) {
    //     // find minimum
    //     int minIndex = i;
    //     for(int j=i+1; j<n; j++) {
    //         if(a[j] < a[minIndex]) {
    //             minIndex=j;
    //         }
    //     }
    //     //swap
    //     swap(a[i], a[minIndex]);
    // }


    // BUBBLE SORT
    // vector<int> a{10,1,7,6,14,9};
    // int n=a.size();

    // for(int round =1; round<n; round++) {
    //     bool isSwapped = false;
    //     for(int j=0; j< n-round; j++) {
    //         if(a[j] > a[j+1]){
    //             isSwapped = true;
    //             swap(a[j], a[j+1]);
    //         }
    //     }
    //     if(!isSwapped) {
    //         break;
    //     }
    // }

    // for(int i=0; i<n; i++) {
    //     cout<<a[i]<<" ";    
    // }


    // INSERTION SORT
    vector<int> a{10,1,7,6,14,9};
    int n=a.size();

    for(int i=1; i<n; i++) {
        // step A : fetch i
        int val = a[i];
        // step B : compare
        int j;
        for(j=i-1; j>=0; j--) {
            if(a[j] > val) {
                // step C : Shift
                a[j+1] = a[j]; 
            }
            else {
                break;
            }
        }
        // step D: copy i
        a[j+1] = val;
    }

    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";    
    }
}