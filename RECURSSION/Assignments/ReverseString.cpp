#include<iostream>
using namespace std;

void reverse(string& str, int i, int j) {
    // B.C
    if(i >= j) return;

    swap(str[i], str[j]);
    reverse(str, i+1, j-1);
}

int main() {
    string str = "dcba";
    int i = 0;
    int j = str.size() - 1;
    reverse(str, i, j);
    cout<< "Reversed string after recurssion : "<< str << endl;
    return 0;
}