#include<iostream>

using namespace std;

float getAreaOfcircle(int r){
    return 2*2.14*r;
}

int getOddEven(int n) {
    if(n%2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

long long int getFactorial(int n) {
    long long int fact=1;
    for(int i=1; i<=n; i++) {
        fact = fact*i;
    }
    return fact;
}

bool getPrime(int n) {
    if(n<=1) return false;

    if( n == 1 || n==2) return true;

    for(int i=2; i*i<=n; i++) {
        if(n%i==0 ){
            cout<<"not";      
        } else {
            cout<<"prime";
        }
    }
}


int getPrimeUptoN(int n) {
    for(int i=2; i<=n; i++) {
        if(!n%i==0) {
            cout<<i<<" ";
        }
    }
}



int main() {
    int n;
    cout<<"Enter value for n:"<<endl;
    cin>>n;

    // Area of circle
    // cout<<"Area of circle is: "<<getAreaOfcircle(n);

    // Odd or even
    // int ans = getOddEven(n);
    // if(ans == 1){
    // cout<<"The number "<<n<<" is a Odd";
    // } else {
    //     cout<<"The number "<<n<<" is a even";
    // }


    // Factorial of a number
    // long long int ans = getFactorial(n);
    // cout<<"Factorial of "<<n<<" is "<<ans<<endl;

    // Check number prime or not
    // if(getPrime(n)) {
    //     cout<<"It is a prime"<<endl;
    // }
    // else {
    //     cout<<"Not a prime";
    // }


    // Print prime upto N
    
    
    

    return 0;
}