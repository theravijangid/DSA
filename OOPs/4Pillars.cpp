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
// class Animal {
//     public:
//     int age;
//     int weight;

//     void eat() {
//         cout<<"Eating"<< endl;
//     }
// };

// // child class
// class Dog:public Animal {

// };

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



// Polymorphism 
// 1 -> compile time Polymorphism with // function overloading
class Maths {
    public:
    // function overloading
    // multiple / many forms of the sum function
    int sum(int a, int b) {
        cout<<"I am inside first signature" << endl;
        return a + b;
    }

    int sum(int a, int b, int c) {
        cout<<"I am inside second signature" << endl;
        return a + b + c;
    }

    int sum(int a, float b) {
        cout<<"I am inside third signature" << endl;
        return a + b + 100;
    }
} ;


// 1 -> compile time Polymorphism with // Operator overloading
class Param {
    public:
    int val;

    // Operator overloading
    void operator+(Param& obj2) {
        int val1 = this->val;   // curr obj
        int val2 = obj2.val;   // input parameter
        cout<< val2 - val1<< endl;
    }
};

// h.w
class Print {
    public:
    int num;
    int height;
    int weight;

    Print() {
        this->num = 5;
        this->height = 176;
        this->weight = 78;
    }
    //  =inside class if using friend
    friend ostream& operator<<(ostream& os,const Print& obj) {
        os << "num: " << obj.num << ", height: " << obj.height << ", weight: " << obj.weight << endl;
        return os;
    }

    // Overloading the >> operator to input class members
    friend istream& operator>>(istream& ip, Print& obj) {
        cout << "Enter num, height, and weight: " << endl;
        ip >> obj.num >> obj.height >> obj.weight;
        return ip;
    }
};
//  Done outside of the class if we are not using friend
// Overloading the << operator and we use friend keyword to access private , protected members ex : friend ostream& operator<<(ostream& os, const Print& obj) 
// ostream& operator<<(ostream& os,const Print& obj) {
//     os << "num: " << obj.num << ", height: " << obj.height << ", weight: " << obj.weight << endl;
//     return os;
// }


// 2 -> Runtime time Polymorphism 
// Function overiding
class Animal {
    public:
    Animal() {
        cout<<"I am inside animal constructor" << endl;
    }
    virtual void speak() {
        cout<<"Speaking" << endl;
    }
};
class Dog:public Animal {
    public:
    Dog() {
        cout<<"I am inside Dog constructor" << endl;
    }
    // overiding function
    void speak() {
        cout<<"Barking" << endl;
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
    // Scorpio s;
    // Fortuner f;
    // cout<< s.name << " " << f.name << endl;
    // f.sppedUp();


    // Polymorphism 
    // 1 -> compile time Polymorphism
    // function overloading
    // Maths obj;
    // cout<< obj.sum(10,2) << endl;
    // cout<< obj.sum(10,2,50) << endl;
    // cout<< obj.sum(10,2.5f) << endl;


    // Operator overloading
    // Param obj1, obj2;
    // obj1.val = 7;
    // obj2.val = 3;

    // this shoul print the diffrence between them (using operator+ defn)
    // obj1 + obj2;

    // h.w
    // Print obj;
    // cout << obj << endl;
    // cin >> obj;
    // cout<< obj << endl;


    // 2 -> Runtime time Polymorphism 
    // Function overiding
    // Animal a;
    // a.speak();
    // Dog d;
    // d.speak();

    // UpCasting
    // Animal* a = new Dog();
    // a->speak();

    // DownCasting
    // Dog* d =(Dog* ) new Animal();
    // d->speak();

    // Animal* a = new Animal();
    // Dog* a = new Dog();   // Due to inheritance behaviour both parent contructor will be called and after that child contructor call
    // Animal* a = new Dog();
    // Dog* a =(Dog*) new Animal();

    return 0;
}  


