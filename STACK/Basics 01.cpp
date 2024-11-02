#include<iostream>
#include<stack>
using namespace std;

int main() {
    // using STL library
    // creation
    // stack<int> s;

    // // insertion
    // s.push(10);
    // s.push(20);
    // s.push(30);

    // // remove
    // s.pop();

    // // check element on top
    // cout<<"Element on top is: " << s.top() << endl;

    // // size
    // cout<<"Element on top is: " << s.size() << endl;

    // // isEmpty
    // if(s.empty()) 
    //     cout<<"Stack is empty";
    // else 
    //     cout<<"Stck is not empty";
    


    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()) {
        cout<< s.top() << " ";
        s.pop();    
    }
    cout<< endl;

    return 0;
}