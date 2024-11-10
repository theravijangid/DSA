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
    
    if(s.empty()) {
        cout<< "Stack is empty, cannot insert top element at bottom" << endl;
        return 0;
    }
    int target = s.top();
    s.pop();

    insertAtBottom(s, target);
    print(s);

    return 0;
}