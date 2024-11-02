#include<iostream>
using namespace std;

class Stack {
    
    private:     // marking them private will wnsure that no one can access these
    int top;
    int *arr;
    int size;
    public:
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions
    void push(int data) {
        // check space available
        if(size - top > 1) {
            // means space available
            top++;
            arr[top] = data;
        }
        else {
            cout<<"Stack Overflow"<< endl;
        }
    }

    void pop() {
        // check space is empty
        if(top == -1) {
            cout<<"Stack Underflow"<< endl;
        }
        else {
            // simple top ko piche le jao
            top--;
        }
    }

    int getTop() {
        if(top == -1) {
            cout<<"Stack Underflow"<< endl;
        }
        else{
            return arr[top];
        }
    }

    int getSize() {
        return top + 1;
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    Stack s(4);

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(50);

    while(!s.isEmpty()) {
        cout<< s.getTop() <<" ";
        s.pop();
    }
    cout<< endl;
    s.pop();

    cout<< "Size of stack: " << s.getSize() << endl;
    return 0;
}