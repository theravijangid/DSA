#include<iostream>
using namespace std;

#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

float getAreaCircle(float r) {
    return PI * r * r;
}

float circlePerimeter(float r) {
    return 2 * PI * r;
}

void fun() {
    int x=2, y=4;
    int c = MAXX(x,y);
}

void fun2() {
    int a=20, b=4;
    int c = MAXX(a,b);
}

void fun3() {
    int x=12, y=41;
    int c = MAXX(x,y);
    cout<<c;
}

int main() {
    cout<< getAreaCircle(3)<< endl;
    fun3();
    fun();
    return 0;
}