#include<iostream>
using namespace std;

inline void numShow(int num) {
    cout<< num << endl;
}

int main() {
    numShow(10);     // internally this would be like this cout<< num << endl;
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    return 0;
}