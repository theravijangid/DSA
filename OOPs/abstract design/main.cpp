#include<iostream>
#include"bird.h"
using namespace std;

void birddoesSomething(Bird *&bird) {
    bird->eat();
    bird->fly();
}

int main() {
    // Bird *bird = new sparrow(); 
    // birddoesSomething(bird);

    Bird *bird = new eagle(); 
    birddoesSomething(bird);
    return 0;
}