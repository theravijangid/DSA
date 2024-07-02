#include<iostream>
#include<string.h>

using namespace std;

int main() {
    // int arr[] = {1,2,3,4,5};

    // // Access all value
    // for(int i=0; i<5; i++) {
    //     cout<< arr[i] << " ";
    // }

    // int arr[5];
    // cout<<"Enter value in array"<<endl; 
    // for(int i=0; i<5; i++) {
    //     cin>>arr[i];
    // }
    // cout<<"Printing the values in array "<<endl;
    // for(int i=0; i<5; i++) {
    //     cout<< arr[i] << " ";
    // }

    // Q1
    // int arr[500];
    // int n;
    // cout<<"Enter how many numbers you want to double"<<endl;
    // cin>>n;
    // cout<<"Enter the numbers "<<endl;
    // for(int i=0; i<n; i++) {
    //     cin>>arr[i];
    // }
    // cout<<"Printing doubles of the elements "<<endl;
    // for(int i=0; i<n;i++) {
    //     cout<<2*arr[i] << " ";
    // }


    // Q2
    int arr[5]= {1,3,5,7,9};
    // for(int i=0; i<5; i++) {
    //     arr[i] = 1;
    // }

    // memset function
    memset(arr, 1, sizeof(arr));
    cout<<"Printing the values in array "<<endl;
    for(int i=0; i<5; i++) {
        cout<< arr[i] << " ";
    }

    return 0;
}