#include<iostream>
#include<vector>
using namespace std;

int findTargetInNearly(vector<int> a, int target){
    int s = 0;
    int e = a.size() -1;

    while (s <= e)
    {
        int mid = s + (e-s)/2;
        if(target == a[mid]){
            return mid;
        }
        if(mid-1 >= s && target == a[mid-1]) {
            return mid-1;
        }
        if(mid+1 <= e && target == a[mid+1]) {
            return mid +1;
        }
        if(target < a[mid]) {
            e = mid-2;
        }
        else{
            s = mid+2;
        }
    }
    return -1;
}


int findQuotient(int dividend, int divisor){
    int s=0;
    int e=abs(dividend);
    int ans = 0;

    while(s <= e) {
        int mid = s + (e-s)/2;
        if(abs(mid * divisor) == abs(dividend)) {
            ans = mid;
            break;
        }
        if(abs(mid * divisor) < abs(dividend)) {
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)) 
        return ans;
    else {
        return -ans;
    }
}

int oddOccurence(vector<int> a) {
    int s=0;
    int e=a.size()-1;

    while(s<= e) {
        int mid = s + (e-s)/2;

        if(s == e) {
            return s;
        }

        if(mid%2 == 0) {
            if(a[mid] == a[mid+1]) {
                s= mid+2;
            } else {
                e =mid;
            }
        }
        else {
            if(a[mid] == a[mid-1]) {
                s = mid+1;
            }
            else {
                e=mid-1;
            }
        }
        
    }
    return -1;
}

int main() {
    // FINDING ELEMENT IN NEARLY SORTED ARRAY
    // vector<int> a{10,3,40,20,50,80,70};
    // int target;
    // cin>>target;

    // int ans = findTargetInNearly(a, target);
    // cout<<"Index of "<<target<<" is "<<ans<<endl;


    // DIVISION USING BS
    // int dividend,divisor, precision;
    // cin>>dividend;
    // cin>>divisor;
    // int ans = findQuotient(dividend, divisor);

    // cout<<"Quotient is: "<<ans<<endl;
    // cout<<"Enter the precison "<<endl;
    // cin>>precision;

    // double finalAns = ans;
    // double step = 0.1;
    // for(int i=0; i<precision; i++) {
    //     for(double j=finalAns; j*divisor <= dividend; j+=step) {
    //         finalAns = j;
    //     }
    //     step = step/10;
    // }
    // cout<<"Ans after precision is : "<<finalAns<<endl;


    // ODD OCCURENCE OF AN ELEMENT IN ARRAY USING B.S
    vector<int> a{4,1,2,1,2};
    int ans = oddOccurence(a);
    cout<<"Index of element "<<ans<<endl;
    cout<<"Element is "<<a[ans]<<endl;

    return 0;
}