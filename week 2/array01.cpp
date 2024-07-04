#include<iostream>
#include<string.h>
#include <limits.h>

using namespace std;

void printArr(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void Inc(int arr[], int size) {
    arr[0] +=10;
    printArr(arr, size);
}

bool find(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) return true;
    }
    return false;
}




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
    // int arr[5]= {1,3,5,7,9};
    // // for(int i=0; i<5; i++) {
    // //     arr[i] = 1;
    // // }

    // // memset function
    // memset(arr, 1, sizeof(arr));
    // cout<<"Printing the values in array "<<endl;
    // for(int i=0; i<5; i++) {
    //     cout<< arr[i] << " ";
    // }


    // int arr[] = {5,6};
    // int size=2;
    // Inc(arr, size);
    // printArr(arr, size);


    // find key in arr using linear search
    // int arr[5] = {6,2,3,4,8};
    // int size = 5;
    // int key;
    // cout<<"Enter the key to find in array"<<endl;
    // cin>>key;
    // if(find(arr, size, key)){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not found";
    // }


    // count 0's and 1's in array
    // 0


    // find maximum in arr
    // int arr[] = {2,-3,5,1,40,6};
    // int size = 6;
    // int maxNum = INT_MIN;
    // for(int i=0; i<size; i++) {
    //     if(arr[i] > maxNum)  {
    //         maxNum = arr[i];
    //     }
    // } 
    // cout<<"Maximus is = "<<maxNum;


    // // Find minimaum in arr
    // int minNum = INT_MAX;
    // for(int i=0; i< size; i++) {
    //     if(arr[i] < minNum) {
    //         minNum = arr[i];
    //     }
    // }
    // cout<<"Minimum number is = "<<minNum;


    // Print extereme values
    // int arr[7] = {10,20,30,40,50,60,70};
    // int size = 7;
    // int start = 0;
    // int end = size-1;
    // while(start <= end) {
    //     if(start == end) {
    //         cout<<arr[start]<< " ";
    //     }
    //     else {
    //         cout<<arr[start]<< " ";
    //         cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
    // }


    // Reverse an array
    // int arr[7] = {10,20,30,40,50,60,70};
    // int size = 7;
    // int start = size-1;
    // while(start>=0) {
    //     cout<<arr[start]<<" ";
    //     start--;
    // }

    // by swap
    // int s =0;
    // int e = size-1;
    // while(s<=e) {
    //     swap(arr[s], arr[e]);
    //     s++;
    //     e--;
    // }
    // for(int i=0; i<size; i++) {
    //     cout<<arr[i]<< " ";
    // }


    // Implement swap function 3 ways i.e s,e ; xor, temp var
    // using two pointers
    // int arr[8] = {10, 20, 30, 40, 50, 60, 70};
    // int size = 7;
    // int s = 0;
    // int e = size - 1;

    // while (s <= e) {
    //     if (s == e) {
    //     arr[s] = arr[s];
    //     } else {
    //     arr[s] = arr[s] + arr[e];
    //     arr[e] = arr[s] - arr[e];
    //     arr[s] = arr[s] - arr[e];
    //     }
    //     s++;
    //     e--;
    // }
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }


    // using temp var
    // int arr[8] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // int s = 0;
    // int e = size - 1;
    // int temp;

    // while (s <= e) {
    //     if (s == e) {
    //     arr[s] = arr[s];
    //     } else {
    //     temp = arr[s];
    //     arr[s] = arr[e];
    //     arr[e] = temp;
    //     }
    //     s++;
    //     e--;
    // }

    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }


    // using xor
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int s = 0;
    int e = size - 1;

    while (s < e) {
        arr[s] = arr[s] ^ arr[e];
        arr[e] = arr[s] ^ arr[e];
        arr[s] = arr[s] ^ arr[e];
        s++;
        e--;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}