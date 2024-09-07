#include<iostream>
using namespace std;

void printPermutation(string &str, int i) {
    // base case
    if(i >= str.length()) {
        cout<< str <<" ";
        return;
    }


    // swapping
    for(int j=i; j<str.length(); j++) {
        swap(str[i], str[j]);

        // RR call
        printPermutation(str, i+1);

        // backtracking - to recreate the original string
        swap(str[i], str[j]);
    }
}

int main() {
    string str = "xyz";
    printPermutation(str, 0);

    return 0;
}