#include<iostream>
#include<string.h>
using namespace std;

// METHOD 1 LEFT TO RIGHT
void findOccur(string&str, char ch, int i, int& a) {
    //B>C
    if(i >= str.size()) return;

    // RR
    if( str[i] == ch) {
        a = i;
    }
    findOccur(str, ch, i + 1, a);
}

// METHOD 2 RIGHT TO LEFT
void solve(string&str, char ch, int i, int& ans) {
    // B.C
    if(i < 0) return;

    if(str[i] == ch) {
        ans = i;
        return;
    }
    solve(str, ch, i - 1, ans);
}

int main() {
    string str = "abcdddef";
    char ch = 'e';
    int i = 0;
    int ans = -1;
    // METHOD 1
    // findOccur(str, ch, i, ans);

    // METHOD 2
    // int n = str.size() - 1;
    // solve(str, ch, n, ans);
    // cout<<"Last Occurence is : "<< ans << endl;

    // METHOD 3 using strrchr()
    const char* cstr = str.c_str();
    char* ptr = strrchr(cstr, ch);
    if(ptr) {
        cout<<"Last Occurence is : "<< (ptr - cstr) << endl;
    }
    else {
        cout<< "Not found";
    }

    return 0;
    }