#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start=0;
    int end=n-1;
    // int mid = (start+end)/2;
    int mid = start + (end-start)/2;

    while(start<= end) {
        int element = arr[mid];
        if(element == target) {
            return mid;
        }
        else if(target < element) {
            end=mid-1;
        }
        else {
            start= mid+1;
        }
        // mid = (start+end)/2;
        mid = start + (end-start)/2;
    }
    // element not found
    return -1;
}

int firstOccur(vector<int> a, int target) {
    int s=0;
    int e=a.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if(target == a[mid]) {
            ans = mid;
            // now check on the left end side
            e = mid-1;
        }
        else if(target < a[mid]) {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccur(vector<int> a, int target) {
    int s=0;
    int e=a.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if(target == a[mid]) {
            ans = mid;
            // now check on the right end side
            s = mid+1;
        }
        else if(target < a[mid]) {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int peakElement(vector<int> a) {
    int s= 0;
    int e = a.size()-1;
    int mid = s + (e-s)/2;

    while(s < e) {
        if(a[mid] < a[mid + 1]) {
            s = mid + 1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int findMissing(vector<int> a) {
    int s=0;
    int e = a.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (a[mid] == mid + a[0]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return s + a[0];
}

int main() {
    // int arr[] ={2,4,6,8,10,12,16};
    // int n=7;
    // int target;
    // cout<<"enter element to find"<<endl;
    // cin>>target;

    // int ans = binarySearch(arr, n, target);
    // if(ans == -1) {
    //     cout<<"target not found"<<endl;
    // }
    // else {
    //     cout<<"target found at "<<ans<<" index"<<endl;
    // } 


    // FIND FIRST AND LAST OCCURANCE OF ELEMENT  AND TOTAL OCCURENECE
    // vector<int> a{1,2,3,3,3,4,5,6};
    // int target;
    // cout<<"enter element to find"<<endl;
    // cin>>target;

    // int first = firstOccur(a, target);
    // int last = lastOccur(a, target);
    // if(first && last == -1) {
    //     cout<<"target not found"<<endl;
    // }
    // else {
    //     cout<<"target found at first "<<first<<" index"<<" and last "<<last<<" index"<<endl;
    // }

    // int totalOcuu = last - first + 1;
    // cout<<"Total occurence is "<<totalOcuu<<endl;


    // H.W FIND MISSING ELEMENT USING BINARY SEARCH
    // vector<int> a{1,3,4,5,6};

    // int res = findMissing(a);
    // cout<<"Missing element is "<<res<<endl;


    // LEETCODE 852 PEAK INDEX OF A MOUNTAIN ARRAY
    // vector<int> a{0,7,8,4};

    // int ans = peakElement(a);
    // cout<<"Peak element is "<<ans<<endl;

    

    return 0;
}