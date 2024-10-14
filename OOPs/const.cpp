#include<iostream>
using namespace std;

class abc{
    // mutable int x;   // mutable is used to bypass or break the const promise
    int x;
    int *y;
    int z;
    
    public:
    // ctor : old style
    // abc(int x, int y, int z = 0) {  // default args are declared on the rightmost side
    //     this->x = x;
    //     this->y = new int(y);
    //     this->z = z;
    // }

    // initialization list -> new way of writing constructor
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {}

    int getX() const {
        // x = 10;
        return x;
    }

    void setX(int val) {
        x = val;
    }

    int getY() const {
        return *y;
    }

    void setY(int val) {
        y = new int(val);
        // *y = val;
    }

    int getZ() const {
        return z;
    }
};

void printABC(const abc &a) {
    cout<< a.getX() << " "<< a.getY()<<" "<<a.getZ() << endl;
}

int main() {
    abc a(5,6);
    printABC(a);

    return 0;
}

int main2() {
    // const int a = 5;

    // cout<<a<<endl;

    // 2. const with pointers
    // const int *a = new int(5); // CONST data, non-CONST pointer
    // int const *a = new int(7);     // same as above line
    // cout<<*a<<endl;
    // // *a = 20;  // cant change the content of pointer.
    // // delete a; // to avoid memory leak

    // int b = 25;
    // a = &b; // pointer itself can be reassigned.
    // cout<< *a << endl;


    // CONST pointer and non-CONST Data.
    // int *const a = new int(5);
    // cout<< *a << endl;
    // *a = 20;
    // cout<< *a << endl;
    // int b = 50;
    // a = &b; // nahi chalega, as pointer is contant


    // 3. CONST pointer and CONST data
    // const int *const a = new int(5);
    // cout<< *a << endl;
    // *a = 50;
    // int b = 53;
    // a = &b;

    return 0;
}