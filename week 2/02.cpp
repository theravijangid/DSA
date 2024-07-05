#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr) {
    int ans=0;
    for(int i=0; i< arr.size(); i++) {
        ans = ans ^ arr[i];
    }   
    return ans;
}

int main() {
    // vector<int> arr;

    // // int ans = (sizeof(arr)/sizeof(int));
    // // cout<<ans<<endl;

    // cout<<arr.capacity()<<endl;
    // cout<<arr.size()<<endl;

    // arr.push_back(5);
    // arr.push_back(10);

    // for(int i=0; i<arr.size(); i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // arr.pop_back();
    // for(int i=0; i<arr.size(); i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // int n;
    // cout<<"Enter the value of n "<<endl;
    // cin>>n;

    // vector<int> brr(n, 7);
    // cout<<"Size of brr "<<brr.size()<< endl;
    // cout<<"Capacity of brr "<<brr.capacity()<< endl;

    // for(int i=0; i<brr.size(); i++) {
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"Printing vector c"<<endl;
    // vector<int> crr{10,20,30,40};
    // for(int i=0; i< crr.size(); i++) {
    //     cout<< crr[i]<<" ";
    // }


    // Q1 Unique element
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // cout<<"Enter values in array"<<endl;
    // for(int i=0; i < arr.size(); i++) {
    //     cin>>arr[i];
    // }

    // int uniqueElement = findUnique(arr);
    // cout<<"Unique Element is "<<uniqueElement<<endl;


    // Q Union of two arraays
    // int arr[] = {1,5,6,8};
    // int a=4;
    // int brr[] = {9,2,3};
    // int b=3;

    // vector<int> ans;

    // for(int i=0; i<a; i++) {
    //     ans.push_back(arr[i]);
    // }
    // for(int i=0; i<b; i++) {
    //     ans.push_back(brr[i]);
    // }
    // cout<<"Printing ans/ Union"<<endl;
    // for(int i=0; i< ans.size(); i++) {
    //     cout<<ans[i]<<" ";
    // }


    // Q Union with duplicates
    // vector<int> arr{1,2,3,4};
    // vector<int> brr{3,4,6};
    // vector<int> ans;
    // for(int i=0; i<arr.size(); i++) {
    //         ans.push_back(arr[i]);
    // }

    // for(int i=0; i< brr.size(); i++) {
    //     bool found = false;
    //     for(int j=0; j<arr.size(); j++) {
    //         if(brr[i] == arr[j]) {
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(!found) {
    //         ans.push_back(brr[i]);
    //     }
        
    // }

    // for(auto val: ans) {
    //     cout<<val<<" ";
    // }

    // Q Intersection 
    // vector<int> arr{1,2,3,3,4,6,8};
    // vector<int> brr{3,3,4,9,10};

    // vector<int> ans;

    // for(int i=0; i< arr.size(); i++) {
    //     for(int j=0; j< brr.size(); j++) {
    //         if(arr[i] == brr[j]) {
    //             // for repeatative case
    //             brr[j] = -1;
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }
    // cout<<"Printing Intersection/ ans :"<<endl;
    // for(auto value: ans) {
    //     cout<<value<<" ";
    // }


    // Q pair sum
    // vector<int> arr{1,3,5,7,2,4,6};
    // int sum = 9;
    // for(int i=0; i< arr.size(); i++) {
    //     for(int j=i+1; j < arr.size(); j++) {
    //         int pro = arr[i] + arr[j];
    //         if(sum == pro) {
    //             cout<<arr[i]<<" and "<<arr[j]<<endl;
    //         }
    //     }
    // }


    // Q pair sum with triplets
    // vector<int> arr{10,20,30,40};
    // int sum = 80;
    // for(int i=0; i< arr.size(); i++) {
    //     for(int j=i+1; j < arr.size(); j++) {
    //         for(int k=j+1; k<arr.size(); k++) {
    //             if(arr[i] + arr[j] + arr[k] == sum) {
    //                 cout<<arr[i]<<" and "<<arr[j]<<" and "<<arr[k]<<endl;
    //             }
    //         }
    //     }
    // }


    // Sort 0's and 1's
    // vector<int> arr{0,1,0,1,0,0,1};
    // int start = 0;
    // int end = arr.size() - 1;
    // int i=0;

    // while(i != end) {
    //     if(arr[i] == 0) {
    //         swap(arr[start], arr[i]);
    //         i++;
    //         start++;
    //     } 
    //     else {
    //         swap(arr[end], arr[i]);
    //         end--;
    //     }
    // }
    // for(auto value: arr) {
    //     cout<<value<< " ";
    // }


    // Q left rotate an array by one element 
    // vector<int> arr{10,20,30,40};
    // vector<int> brr;
    // int temp = arr[0];
    // for(int i=1; i<arr.size(); i++) {
    //     brr.push_back(arr[i]);
    // }
    // brr.push_back(temp);
    // for(auto value: brr) {
    //     cout<<value<< " ";
    // }




    return 0;
}