#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    virtual void eat() = 0;  // this is called pure virtual function
    virtual void fly() = 0;
    // classes that inherits this class has to implement pure virtual func.
};

class sparrow: public Bird {
    private:
    void eat() {
        std::cout<<"Sparrow is eating\n";
    }
    void fly() {
        std::cout<<"Sparrow is flying\n";
    }
};

class eagle: public Bird {
    private:
    void eat() {
        std::cout<<"Eagle is eating\n";
    }
    void fly() {
        std::cout<<"Eagle is flying\n";
    }
};


#endif