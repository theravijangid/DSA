#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(string str, string output, int i, vector<string>& v) {
    // B.C
    if(i >= str.length()) {
        v.push_back(output);
        return;
    }

    // EXCLUDE KA CASE
    printSubsequence(str, output, i + 1, v);

    // INCLUDE KA CASE
    output.push_back(str[i]);
    printSubsequence(str, output, i + 1, v);
}

int main() {
    string str = "  ";  
    string output = "";
    vector<string> v;
    int i = 0;
    printSubsequence(str, output, i, v);

    cout<<"Printing sub sequences "<< endl;
    for(auto val: v) {
        cout<< val<< " ";
    }
    cout<< endl << "Size of vector is: "<< v.size() << endl;

    return 0;
} 
