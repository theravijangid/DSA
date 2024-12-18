#include<iostream>
using namespace std;

class Stack {

    public:
    int top1;
    int top2;
    int *arr;
    int size;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // functions operations
    void push1(int data) {
        if(top2- top1 == 1) {
            // space not available
            cout<<"OVERFLOW IN STACK 1"<< endl;
        }
        else {
            // space available
            top1++;
            arr[top1] = data; 
        }
    }

    void pop1() {
        if(top1 == -1) {
            cout<<"UNDERFLOW IN STACK 1"<< endl;
        } 
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void push2(int data) {
        if(top2 - top1 == 1) {
            // space not available
            cout<<"OVERFLOW IN STACK 2"<< endl;
        }
        else {
            // space available
            top2--;
            arr[top2] = data; 
        }
    }

    void pop2() {
        if(top2 == size) {
            cout<<"UNDERFLOW IN STACK 1"<< endl;
        } 
        else{
            arr[top2] = 0;
            top2++;
        }
    }

    // NEVER DO THIS IN INTERVIEW ITS ONLY FOR VISUAL UNDERSTANDING
    void print() {
        cout<< endl;
        cout<<"Top1: "<< top1 << endl;
        cout<<"Top2: "<< top2 << endl;
        for(int i=0; i<size; i++) {
            cout<< arr[i] << " ";
        }
        cout<< endl;
    }
};

int main() {
    Stack s(10);
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    s.push2(130);
    s.print();
    s.push2(140);
    s.print();
    
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.print();

    s.pop1();

    s.push1(140);
    s.print();

    return 0;
}