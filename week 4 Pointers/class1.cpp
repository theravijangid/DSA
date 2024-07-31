#include<iostream>
using namespace std;

int main() {
    // int a = 5;
    // int b = 5;

    // cout<< a <<endl;

    // cout<< &a <<endl;
    // cout<< &b <<endl;


    // int a = 5;
    // pointer create
    // int* ptr = &a;

    // access the value ptr is pointing to
    // cout<<"Address of a is : "<<&a<<endl;
    // cout<<"value stored at ptr is : "<<ptr<<endl;
    // cout<<"value ptr is pointing to : "<<*ptr<<endl;
    // cout<<"ptr ka address : "<<&ptr<<endl;

    // int a = 5;
    // int* ptr = &a;
    // cout<<sizeof(ptr)<<endl;

    // char ch = 5;
    // char* chr = &ch;
    // cout<<sizeof(chr)<<endl;

    // double d = 5;
    // double* dtr = &d;
    // cout<<sizeof(dtr)<<endl;  // Output will be dependent on system architecture i.e it is stored in 8 byte

    // BAD PRACTICE
    // int* ptr;
    // cout<<*ptr<<endl;


    // NULL POINTER  // GOOD PRACTICE TO DECLARE NULL PTR
    // int* ptr = nullptr;  // 0 / nullptr  / NULL
    // cout<<*ptr<<endl;


    // int a = 5;
    // int* ptr =  &a;
    // // pointer copy
    // int* dusraPtr = ptr;
    // cout<<"Pehla ptr : "<<*ptr<<endl;
    // cout<<"Dusra ptr : "<<*dusraPtr<<endl;


    int a = 5;
    int* p = &a;
    int* q = p;
    int* r = q;

    cout<< a << endl;
    cout<< &a << endl;
    cout<< p << endl;
    cout<< &p << endl;
    cout<< *p << endl;
    cout<< q << endl;
    cout<< &q << endl;
    cout<< *q << endl;
    cout<< r << endl;
    cout<< &r << endl;
    cout<< *r << endl;
    cout<< (*p + *q + *r) << endl;
    cout<< (*p)*2 + (*r)*3 << endl;
    cout<< (*p)/2 - (*q)/2 << endl;
}