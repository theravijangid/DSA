#include<iostream>
using namespace std;

class Animal {
    // state or Properties
    private: 
    int weight;

    public:
    int age;
    string name;

    // default constructor
    Animal() {
        this->weight = 0;
        this->age = 0;
        cout<<"Constructor called" << endl;
    }

    // parametrised contructor
    Animal (int age) {
        this->age = age;
        cout<<"Parametrised constructor called" << endl;
    }

    Animal (int age, int weight) {
        this->age = age;
        this->weight = weight;
        cout<<"Parametrised constructor 2 called" << endl;
    }

    // copy constructor
    Animal (Animal &obj) {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"Inside copy constructor" << endl;
    }

    // Destructor
    ~Animal() {
        cout<<"Inside Destructor"<< endl;
    }


    // behaviour
    void eat() {
        cout<< "Eating..."<< endl;
    }

    void sleep() {
        cout<<"Sleeping..."<< endl;
    }

    int add(int a, int b) {
        return a + b;
    }

    

    // These are use to access private properties outside class
    // getters 
    int getWeight() {
        return weight;
    }

    // setters
    void setWeight(int weight) {
        this->weight = weight;
    }
    
    void print() {
        cout<< this->name <<" " << this->age<< " "<< this->weight<<endl;
    }
};

int main() {

    // Object Creation two ways
    // static
    // Animal dog;

    // accessing properties
    // dog.age = 8;
    // dog.name = "harry";
    // cout<<"Age of dog is "<< dog.age << endl;
    // cout<<"Name of dog is "<< dog.name << endl;

    // // accessing behaviour
    // dog.eat();
    // dog.sleep();

    // cout<<"Addition : "<< dog.add(1,3) << endl;

    // // to access private member
    // dog.setWeight(74);
    // cout<<"Dog weight is " << dog.getWeight()<< endl;

    // dynamic Memory
    // Animal* cat = new Animal;

    // (*cat).age = 7;
    // (*cat).name = "billy";

    // // alternate way
    // cat->age = 9;
    // cat->name = "cat";
    // cout<<"Name of cat "<< (*cat).name<< endl;
    // cat->sleep();
    // cout<<cat->add(5,5) << endl;
    // cout<<"Weight of cat " << cat->getWeight() << endl;


    //  constructor calling parametrised
    // Animal a(10);
    // Animal* dog = new Animal(10,100);

    // // Copy contructor
    // Animal b = a; 

    // // dusra tarika
    // Animal c(b);

    // copy constructor deep vs shallow *** still unexplained ***
    Animal a;
    a.age = 12;
    a.setWeight(42);
    a.name = "Dog";

    Animal b =a;
    cout<<"a->";
    a.print();
    cout<<"b->";
    b.print();

    a.name[0] = 'F';
    cout<<"a->";
    a.print();

    cout<<"b->";
    b.print();

    // Destructor
    // Animal a;
    // a.age = 5; 
    // // Automatically called for static memory

    // Animal* b = new Animal;
    // b->age = 12;
    // // manually destructor call in heap
    // delete b;

    return 0;
}