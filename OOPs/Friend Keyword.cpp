#include<iostream>
using namespace std;


class A{
    private:
    int x;
    
    public:
    A(int _val) : x(_val) {}

    int getX() const { return x; }
    int setX(int _val) { x = _val; }

    // friend class B;
    // friend void print(const A &a);

    // better design/ approach rather than accessing M.F from other class
    void print() const {
        cout<< x << endl;
    }
};

class B {
    public:
    void print(const A &a) {
        // cout<< a.getX() << endl;
        // cout<< a.x << endl;

        // call the print directly to access private value x
        a.print();
    }
};

// void print(const A &a) {
//     cout<< a.x << endl;
// }

int main() {
    A a(505);
    B b;
    b.print(a);
    // print(a);
    return 0;
}