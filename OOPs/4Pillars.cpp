#include<iostream>
using namespace std; 

// Encapsulation example
// class Animal {
//     private:   // full or perfect encapsulation
//         int age;
//         int weight;

//     public:
//         void eat() {
//             cout<<"Eating.."<< endl;
//         }

//     int getAge() {
//         return this->age; 
//     }

//     void setAge(int age) {
//         this->age = age;
//     }
// };

//  inheritance
// parent class
class Animal {
    public:
    int age;
    int weight;

    void eat() {
        cout<<"Eating"<< endl;
    }
};

// child class
class Dog:public Animal {

};

// Single level inheritance
// class Car {
//     public:
//     string name;
//     int weight;

//     void speedUp() {
//         cout<< "Speeding up"<< endl;
//     }
// };
// class BMW:public Car {

// };


// Multi level inheritance
class Fruit {
    public:
    string name;

    void func() {
        cout<< "This is fruit" << endl;
    }
};
class Mango: public Fruit {
    public:
    int weight;
}; 
class Alphonso: public Mango {
    public:
    int sugarlevel;
};


// Multiple inheritance
class A {
    public:
    int chemistry;
    A() {
        chemistry = 101;
    }
};
class B {
    public:
    int chemistry;
    B() {
        chemistry = 420;
    }
};
class C: public A, public B {
    public:
    int maths;
};


// Heirarchical inheritance
class Car {
    public:
    int age;
    string name;

    void sppedUp() {
        cout<<"Speeding up" << endl;
    }
};
class Scorpio:public Car{
    public:
    Scorpio() {
        this->name = "Scorpio";
    }
};
class Fortuner: public Car{
    public:
    Fortuner() {
        this->name = "Fortuner";
    }
};


int main(){
    // inheritance
    // Dog d1;
    // d1.eat();

    // Single level inheritance
    // BMW b;
    // b.speedUp();


    // Multi level inheritance
    // Mango m;
    // m.func();
    // Alphonso a;
    // a.func();
    // cout<< a.weight <<" "<< a.name <<" " << a.sugarlevel << " " << endl;


    // Multiple inheritance
    // C obj;
    // cout  << obj.B::chemistry << " " << obj.maths << endl;


    // Heirarchical inheritance
    Scorpio s;
    Fortuner f;
    cout<< s.name << " " << f.name << endl;
    f.sppedUp();

    return 0;
}  


