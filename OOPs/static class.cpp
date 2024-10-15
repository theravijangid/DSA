#include<iostream>
using namespace std;

class abc{

    public:
    static int x, y;

    // void print() const {
    //     // theres a hidden parameter named this 
    //     cout<< this->x << " " << this->y<<endl;
    // }
    
    static void print() {
        // No this pointer accessible.
        cout<<"I am in static "<< __FUNCTION__<<endl;
    }
};

int abc::x;
int abc::y;

int main() {
    // abc obj1 = {1,2};
    // abc obj2 = {3,4};
    // obj1.print();
    // obj2.print();


    abc obj1;
    obj1.print();
    abc::print();
    abc obj2;
    abc::x = 10;
    abc::y = 20;
    abc::print();
    obj2.print();
    return 0;
}