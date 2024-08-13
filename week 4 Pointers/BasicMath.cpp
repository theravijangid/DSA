#include<iostream>
#include<vector>
using namespace std;

int fastExponentiation(int a, int b) {
    int ans = 1;
    while(b > 0) {
        if(b&1) {
        // odd case
        ans*=a;
        }
        a=a*a;
        b>>=1; //b=b/2
    }
    return ans;
}  // O(logb)

int slowExponentiation(int a, int b) {
    int ans = 1;
    for(int i=0; i<b; i++) {
        ans*=a;
    }
    return ans;
}  // O(b)

int getGcd(int a, int b) {
    if(a == 0 ) return b;
    if(b == 0) return a;

    while(a > 0 && b > 0) {
        if(a > b) {
            a-=b;
        }
        else{
            b-=a;
        }
    }
    return a == 0 ? b : a;
}

vector<bool> Sieve(int n) {

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i*i < n; i++) {
        if(prime[i]) {
            int j = i * i;
            while(j < n) {
                prime[j] = false;
                j= j + i;
            }
        }
    }
    return prime;
}


int main() {
    cout<< slowExponentiation(2, 3)<< endl;
    cout<< fastExponentiation(10, 5)<< endl;

    // FINDING GCD USING EUCLIDS THEROEM 
    cout<<"GCD : "<< getGcd(72,24) << endl;


    // COUNTING PRIME USING SIEVE STRESTHENES
    vector<bool> sieve = Sieve(10);
    for(int i=0; i < 10; i++) {
        if(sieve[i]) {
            cout<<i<<" ";
        }
    }
    

    return 0;
}