#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int target) {
    // base case
    if(s.empty()) {
        s.push(target);
        return;
    }

    if(s.top() >= target) {
        s.push(target);
        return;
    }

    int topEle = s.top();
    s.pop();
    insertSorted(s, target);
    s.push(topEle);
}

void sortedStack(stack<int> &s) {
    // base case
    if(s.empty()) {
        return;
    }

    int topEle = s.top();
    s.pop();

    sortedStack(s);

    insertSorted(s, topEle);
}

int main() {
    stack<int> s;
    s.push(7);
    s.push(10);
    s.push(3);
    s.push(5);
    s.push(8);
    s.push(1);

    sortedStack(s);

    while(!s.empty()) {
        cout<< s.top() << " ";
        s.pop();
    }
    return 0;
}