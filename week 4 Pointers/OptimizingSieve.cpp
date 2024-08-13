#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool> Sieve(int n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i*i <= n; i++) {
        if(prime[i]) {
            int j = i * i;
            while(j <= n) {
                prime[j] = false;
                j= j + i;
            }
        }
    }
    return prime;
}

vector<bool> segmentedSieve(int L, int R) {
    // step 1> get the prime array, it will be used to mark seg seieve
    vector<bool> sieve = Sieve(sqrt(R));
    cout<<"normal Sieve : "<<endl;
    for(auto ss: sieve) {
        cout<<ss<<" ";
    }
    cout<<endl;
    cout<<endl;


    vector<int>basePrimes;
    for(int i=2; i < sieve.size(); i++) {
        if(sieve[i]) {
            basePrimes.push_back(i);
        }
    }
    cout<<"Base Primes "<<endl;
    for(auto ss: basePrimes) {
        cout<<ss<<" ";
    }
    cout<<endl;
    cout<<endl;
     
    vector<bool> segSieve(R-L+1, true);
    
    if(L == 1  ) {
        segSieve[0] = false;
        
    }

    for(auto prime: basePrimes) {
        int first_multiple = ((L + prime - 1) / prime) * prime;
        if(first_multiple < L) {
            first_multiple+=prime;
        }
        int j = max(first_multiple, prime * prime);
    
        while(j <= R) {
            segSieve[j - L] = false;
            
            j+=prime;
        }
    }
    cout<<"seg sieve"<<endl;
    for(auto ss:segSieve) {
        cout<<ss<<" ";
    }
    cout<<endl;
    cout<<endl;
    return segSieve;
}


int main() {
    // vector<bool> sieve = Sieve(25);
    // for(int i=0; i < 25; i++) {
    //     if(sieve[i]) {
    //         cout<<i<<" ";
    //     }
    // }

    int L = 1;
    int R = 10;
    vector<bool> seg = segmentedSieve(L, R);
    
    int pro = 1;
    for(int i=0; i < seg.size(); i++) {
        if(seg[i]) {
            pro = pro * (i+ L);  
        }
    }
    cout<<"product : "<<pro;
    return 0;

}