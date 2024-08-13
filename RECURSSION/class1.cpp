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

int main() {
    cout<<"Enter value for n : "<< endl;
    int n;
    cin>>n;

    // int ans = factorial(n);

    // cout<<"Factorial is : "<<ans<<endl;

    // printCounting(n);

    // Fibonacci series
    // int ans = fibo(n);
    // cout<<"Fibonacci series is : "<<ans<<endl;


    // Exponentiation
    int ans = power(n);
    cout<<"Power is "<<ans<<endl;

    return 0;
}