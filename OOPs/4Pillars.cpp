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

int main(){
    // inheritance
    Dog d1;
    d1.eat();

    return 0;
}  


