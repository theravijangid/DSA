#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>& s, int &totalSize) {
    
    if(totalSize == s.size()) {
        cout<<"Middle element is: " << s.top() << endl;
    }

    int temp = s.top();
    s.pop();

    printMiddle(s, totalSize);

    // backtrack
    s.push(temp);
}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    if(s.size() == 0) {
        cout<<"There is no element in stack"<< endl;
        return 0;
    }

    int totalSize = (s.size() / 2) + 1;
    printMiddle(s, totalSize);
    
    return 0;
}