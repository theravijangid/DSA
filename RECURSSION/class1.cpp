#include<iostream>
using namespace std;

int factorial(int n) {
    // Base codn
    if(n == 1) return 1;

    int chottiProblem = factorial(n - 1);
    int badiProblem = n * chottiProblem;
    return badiProblem;
}

void printCounting(int n) {
    if(n == 0) return ;
    
    cout<<n<< " ";
    return printCounting(n - 1);
}


int fibo(int n) {
    if(n == 1 ) {
        return 0;
    }
    if(n == 2) return 1;

    // RR
    return fibo(n - 1) + fibo(n - 2); 
}

int power(int n) {
    if(n == 0) return 1;

    return 2 * power(n - 1);
}


int maximum(int arr[], int n) {
    // B.C
    if(n == 1) return arr[0];

    // RR
    int maxi = maximum(arr, n - 1);

    return (arr[n - 1] > maxi) ? arr[n - 1] : maxi; 
}

int main() {
    // cout<<"Enter value for n : "<< endl;
    // int n;
    // cin>>n;

    // int ans = factorial(n);

    // cout<<"Factorial is : "<<ans<<endl;

    // printCounting(n);

    // Fibonacci series
    // int ans = fibo(n);
    // cout<<"Fibonacci series is : "<<ans<<endl;


    // Exponentiation
    // int ans = power(n);
    // cout<<"Power is "<<ans<<endl;


    // find maximum in array
    int arr[5] = {1,2,-1,4,3};
    int n = 5;
    int ans = maximum(arr, n);
    cout<<"Maximum : "<<ans<<endl;


    return 0;
}