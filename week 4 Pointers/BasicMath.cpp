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

int countPrime(int n) {
    if(n == 0) return 0;
    int ans = 0;

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i < n; i++) {
        if(prime[i]) {
            ans++;
            int j = 2 * i;
            while(j < n) {
                prime[j] = false;
                j= j + i;
            }
        }
    }
    return ans;
}

int main() {
    cout<< slowExponentiation(2, 3)<< endl;
    cout<< fastExponentiation(10, 5)<< endl;

    // FINDING GCD USING EUCLIDS THEROEM 
    cout<<"GCD : "<< getGcd(72,24) << endl;


    // COUNTING PRIME USING SIEVE STRESTHENES
    cout<< "Primes : "<< countPrime(1000)<< endl;
    return 0;
}