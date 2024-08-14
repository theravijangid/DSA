#include<iostream>
#include<limits.h>
using namespace std;

int climbStairs(int n) {
    // B. C
    if(n == 0 || n == 1) {
        return 1;
    }

    return climbStairs(n - 1) + climbStairs(n - 2);
}

void printArr(int arr[], int n, int i) {
    // B . C
    if(i >= n) return;

    cout<<arr[i]<<" ";

    // RR
    printArr(arr, n, i+1);
}


void findMax(int arr[], int n, int i, int& maxi) {
    //B.C
    if(i >= n) return;

    if(arr[i] > maxi) {
        maxi = arr[i];
    }

    // RR
    findMax(arr, n, i+1, maxi);
}

int main(){
    // int n;
    // cout<<"Enter value for n"<< endl;
    // cin>>n;

    // int ans = climbStairs(n);
    // cout<<"Answer is "<< ans << endl;


    // array printing
    // int arr[5] = {1,2,3,4,5};
    // int n= 5, i = 0;
    // printArr(arr, n, i);


    // find maximum
    int arr[7] = {1,5,3,555 ,44,6,88};
    int n = 7;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr, n, i, maxi);
    cout<<"Maximum is : "<< maxi << endl;

    return 0;
} 

