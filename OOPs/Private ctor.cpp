#include<iostream>
using namespace std;

class Box {
    int width;
    Box(int _val) : width(_val) {}

    public:
    int getWidth() const {
        return width;
    }

    void setWidth(int _val) {
        width = _val;
    }

    friend class BoxFactory;
};

class BoxFactory {
    int count;
    public:
    Box getBox(int _w) {
        count++;
        return Box(_w);
    }
};


int main() {
    BoxFactory boxfact;
    Box b = boxfact.getBox(12);
    
    cout<< b.getWidth() << endl;
    return 0;
}