#include<iostream>
#include<limits.h>
#include<vector>
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


void findMin(int arr[], int n, int i, int& mini) {
    // B.C
    if(i >= n) return;

    if(arr[i] < mini) {
        mini = arr[i];
    }

    findMin(arr, n, i + 1, mini);
}


int findKey(string str, char key, int i) {
    // B.C
    if(i >= str.length()) return -1;

    if(str[i] == key) {
        return i;
    } else {
        return findKey(str, key, i + 1);
    }
}


void ckeckCountKey(string str, char key, int i, vector<int>& ans, int& count) {
    // B.C
    if(i >= str.length()) return;

    if(str[i] == key) {
        count++;
        ans.push_back(i);
    } 
    return ckeckCountKey(str, key, i + 1, ans, count);
}

void printDigits(int n) {
    // B.C
    if(n <= 0) return;

    printDigits(n/10);
    int digit = n % 10;
    cout<<digit<<" ";
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
    // int arr[7] = {1,5,3,555 ,44,6,88};
    // int n = 7;
    // int i = 0;
    // int maxi = INT_MIN;
    // findMax(arr, n, i, maxi);
    // cout<<"Maximum is : "<< maxi << endl;


    // find Minimum
    // int arr[7] = {1,5,3,555 ,44,6,88};
    // int n = 7;
    // int i = 0;
    // int mini = INT_MAX;
    // findMin(arr, n, i, mini);
    // cout<<"Minimum is : "<< mini << endl;


    // finding key in string
    // string str = "raviii";
    // char key = 'i';
    // int i = 0;
    // bool found = findKey(str, key, i);
    // if(found) {
    //     cout<<"Found"<< endl;
    // }
    // else {
    //     cout<<"Not found";
    // }

    // find index
    // int found = findKey(str, key, i);
    // cout<<"Index is : "<<found<<endl;

    // vector<int> ans;
    // int count = 0;
    // ckeckCountKey(str, key, i, ans, count);
    // for(auto val: ans) {
    //     cout<<val << " ";
    // }
    // cout<<endl<< "Count : "<< count<<endl;


    // Printing digits 
    int n = 0623;
    cout<<n<<endl;
    printDigits(n);
    

    return 0;
} 

