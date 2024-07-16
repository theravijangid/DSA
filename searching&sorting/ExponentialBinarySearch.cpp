#include<iostream>
using namespace std;

int binarySearch(int a[], int s, int e, int x) {
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(a[mid] == x) {
            return mid;
        }
        else if(a[mid] > x) {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
    }
}

int exponenstialSearch(int a[], int n, int x) {
    if(a[0] == x) return 0;
    int i=1;

    while (i<n && a[i] <= x)
    {
        i = i*2;  // i*=2 // i = i << 1
    }

    return binarySearch(a, i/2, min(i, n-1), x);
}


int infiniteExponentialSearch(int a[], int x) {
    int i=0;
    int j=1;
    while (a[j] < x)
    {
        i = j;
        j= i*2;
    }

    return binarySearch(a, i, j, x);
    
}

int main() {
    // Exponential Search using binary search for large arrays as it improves Time complexity 
    int a[] = {1,2,3,4,5,6,7,8,9,10,12,14,56};
    int n = sizeof(a)/sizeof(int);
    int x = 56;
    // int ans = exponenstialSearch(a, n, x);
    int ans = infiniteExponentialSearch(a, x);
    cout<<ans<<endl;

    return 0;

}