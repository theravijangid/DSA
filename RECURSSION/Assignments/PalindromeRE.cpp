#include<iostream>
using namespace std;

bool palindromeRE(string&str, int i, int j) {
    //B.C
    if(i >= j) {
        return true;
    }

    //RE
    if(str[i] != str[j]) {
       return false; 
    } 

    return palindromeRE(str, i+1, j-1);
}

int main() {
    string str = "raceecar";
    bool ans = palindromeRE(str, 0, str.size() - 1);
    if(ans) {
        cout<<"It is a palindrome"<< endl;
    } else {
        cout<<"It is not a palindrome" << endl;
    }

    return 0;
}