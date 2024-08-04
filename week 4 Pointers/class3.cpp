#include<iostream>
using namespace std;

void util(int* p) {
    // p = p + 1;
    *p = *p + 1;
}

// void solve(int** ptr) {
//     // ptr = ptr + 1;
//     // *ptr = *ptr + 1;
//     **ptr = **ptr + 1;
// } 

void refer(int& val) {
    val++;
}

// void solve(int*& p) {
//     // *p = *p + 1;
//     p = p + 1;
// }


int* solve() {
    int a = 5;
    cout<<"Address of a "<< &a<<endl;
    int* ans = &a;
    cout<<"ans ki value "<<ans<<endl;
    return ans;
}

int main() {
    // int a = 5;
    // int* p = &a;
    // int** q = &p;

    // cout<< &a << endl;
    // cout<< a << endl;
    // cout<< p << endl;
    // cout<< &p << endl;
    // cout<< *p << endl;
    // cout<< q << endl;
    // cout<< &q << endl;
    // cout<< *q << endl;
    // cout<< **q << endl;


    // int a = 5;
    // int* p = &a;

    // cout<<"before "<< endl;
    // cout<< a << endl;
    // cout<< p << endl;
    // cout<< *p << endl;

    // util(p);

    // cout<< endl <<"After "<< endl;
    // cout<< a << endl;
    // cout<< p << endl;
    // cout<< *p << endl;


    // 3
    // int a = 50;
    // int* p = &a;
    // int** q = &p;

    // cout<< a << endl;
    // cout<< p << endl;
    // cout<< *p << endl;
    // cout<<q<<endl;

    // solve(q);
    // cout<<endl<<"After"<< endl;
    // cout<< a << endl;
    // cout<< p << endl;
    // cout<< *p << endl;
    // cout<<q<<endl;


    // REFERENCE VARIABLE
    // int a = 5;
    // int& b = a;

    // cout<< a << endl;
    // cout<< b << endl;

    // a++;
    // cout<< a << endl;
    // cout<< b << endl;
    
    // b++;
    // cout<< a << endl;
    // cout<< b << endl;4


    // pass by reference
    // int a = 19;
    // refer(a);
    // cout<<a << endl;


    // int a = 5;
    // int* p = &a;
    // // cout<<"Before" << *p<< endl;
    // cout<<"Before " << p << endl;
    // solve(p);
    // // cout<<"After" << *p<< endl;
    // cout<<"After " << p<< endl;


    cout<<"Return by reference : "<< solve() << endl;
}