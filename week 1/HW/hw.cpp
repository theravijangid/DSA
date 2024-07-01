#include<iostream>
#include<cmath>

using namespace std;

float getAreaOfcircle(int r){
    return 2.14*r*r;
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
    int i=2;
    for(i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}


int binaryToDecimal(int n){
    int ans =0;
    int i=0;
    while(n>0) {
        int bit = n%10;
        ans = ans + bit * pow(2,i++);
        n=n/10;
    }
    return ans;
}


int decimalToBinary(int n) {
    // divison method
    int binarynum = 0;
    int i=0;
    while (n>0)
    {
        int bit = n%2;
        binarynum = bit*pow(10,i++) + binarynum;
        n = n/2;
    }
    return binarynum;   
}


int decimalToBinaryy(int n) {
    // bitwise method
    int binarynum=0;
    int i=0;
    while(n>0) {
        int bit = (n&1);
        binarynum = bit*pow(10,i++) + binarynum;
        n = n>>1;
    }
    return binarynum;
}

int main() {
    int n;
    cout<<"Enter value for n:"<<endl;
    // cin>>n;

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
    // bool isPrime = getPrime(n);
    // if(isPrime) {
    //     cout<<"Prime\n";
    // } else {
    //     cout<<"Not a Prime\n";
    // }


    // Print prime upto N
    // for(int i=2; i<=n; i++) {
    //     bool isiPrime = getPrime(i);
    //     if(isiPrime) {
    //         cout<<i<<" ";
    //     }
    // }


    // Reverse a number leetcode
    // int ans=0, rem=0;
    // bool isNeg;
    // if(n <= INT_MIN) {
    //     return 0;
    // }
    // if(n < 0) {
    //     isNeg = true;
    //     n = -n;
    // }
    // while(n>0) {
    //     if(ans > INT_MAX/10) {
    //         return 0;
    //     }
    //     int digit = n % 10;
    //     ans= ans*10 + digit;
    //     n = n/10;
    // }
    // return isNeg ? -ans : ans;


    //set the kth bit
    // int k;
    // cin>>k;

    // int mask = 1<<k;
    // int ans = n|mask;
    // cout<<ans;


    // conver temperature
    // float temp;
    // cin>>temp;
    // double k = temp + 273.15;
    // double f = temp + 1.80 + 32.00;
    // cout<<"The celcious "<<temp<<" converted to kelvin:"<<k<<" & fahrenhiet f:"<<f;


    // binary to decimal coversion
    // cin>>n;
    // int val = binaryToDecimal(n);
    // cout<<"conversion of binary:"<<n<<" to decimal is:"<<val;


    // decimal to  binary coversion using divison method
    // cin>>n;
    // int val = decimalToBinary(n);
    // cout<<"\n"<<val;


    // decimal to  binary coversion using bitwise method
    cin>>n;   
    int val = decimalToBinaryy(n);
    cout<<"Binary: "<<n<<" converted to decimal : "<<val;

    return 0;
}