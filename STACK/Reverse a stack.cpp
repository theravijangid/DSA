#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target) {
    if(s.empty()) {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertAtBottom(s, target);
    // backtrack
    s.push(topElement);
}

void reverse(stack<int> &s) {
    // B.C
    if(s.empty()) {
        return;
    }

    int target = s.top();
    s.pop();

    // RE
    reverse(s);
    // Backtrack
    insertAtBottom(s, target);
}

void print(stack<int> &s) {
    while(!s.empty()) {
        cout<<s.top() <<endl;
        s.pop();
    }
}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    reverse(s);
    print(s);

    return 0;
}