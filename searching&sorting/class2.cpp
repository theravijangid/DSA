#include<iostream>
#include<vector>

using namespace std;

int findSqrt(int n) {
    int s=0;
    int e=n;
    int mid = s + (e -s)/2;
    int target = n;
    int ans = -1;

    while(s <= e) {
        if(mid*mid == target) {
            return mid;
        }
        else if(mid * mid < target) {
            s = mid + 1;
            ans = mid;
        }
        else {
            e = mid -1;
        }
        mid = s + (e -s)/2;
    }
    return ans;
}

bool binarySearchTWOD(vector<vector<int>> a,int m,int n, int target) {
    int s = 0;
    int e = m*n-1;
    int mid = s + (e-s)/2;

    while (s <= e)
    {
        int rowIndex = mid/n;
        int colIndex = mid%n;
        int element = a[rowIndex][colIndex];
        if(element == target) {
            cout<<"Fount at "<<rowIndex<<","<<colIndex<<endl;
            return true;
        }
        if(element < target) {
            s = mid +1;
        }
        else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}


int findPivot(vector<int> a) {
    int s=0;
    int e=a.size() - 1;
    int mid = s + (e-s)/2;

    // while(s <= e){
    //     if(mid+1 < a.size() &&   a[mid] > a[mid+1] ) {
    //         return mid;
    //     }
    //     if(mid-1 >=0 && a[mid - 1] > a[mid] ) {
    //         return mid-1;
    //     }
    //     if(a[s] >= a[mid]) {
    //         e = mid -1;
    //     }
    //     else {
    //         s = mid + 1;
    //     }
    //     mid = s + (e-s)/2;
    // }

    while(s < e) {
        if(a[mid] > a[mid+1]) {
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return s;

}

int main(){
    // SQAREROOT USING BS
    // vector<int> a{1,2,3,4,5,6};
    // cout<<"Enter a sqare root "<<endl;
    // int n;
    // cin>>n;

    // int ans = findSqrt(n);
    // cout<<"the ans is: "<<ans<<endl;

    // cout<<"Enter the precision for ans"<<endl;
    // int precision;
    // cin>>precision;

    // double finalAns = ans;
    // double step = 0.1;
    // for(int i=0; i<precision; i++) {
    //     for(double j=finalAns; j*j <= n; j+=step) {
    //         finalAns = j;
    //     }
    //     step = step/10;
    // }
    // cout<<"Ans after precision is : "<<finalAns<<endl;

    // FIND AN ELEMENT IN 2D ARRAY USING B.S
    // vector<vector<int>> a{
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16},
    //     {17,18,19,20}
    // };
    // int m = a.size();
    // int n = a[0].size();

    // int target;
    // cout<<"Enter element to find"<<endl;
    // cin>> target;

    // bool ans = binarySearchTWOD(a,m,n,target);
    // if(ans) {
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }

    // FIND PIVOT ELEMENT
    vector<int> a{7,1,2,3,4,5,6};

    int ans = findPivot(a);
    cout<<"Index of peak element: "<<ans<<endl;
    cout<<"Peak element is: "<<a[ans]<<endl;

    

    return 0;
}