#include<iostream>
using namespace std;

int x = 2;    // GLOBAL VARIABLE

void fun() {
    int x = 10;
    cout<< x << endl;
    ::x = 40;
    cout<< ::x << endl;
}

int main() {
    
    ::x = 12;  // GLOBAL x
    int x = 20;  // LOCAL VARIBLE (in main fn).
    cout<< x << endl;
    cout<< ::x << endl;   // Accessing global variable with ::

    {
        int x = 54;
        {
            int x = 45;
            cout<< x << endl;
        }
        cout<< x << endl;
        cout<< ::x << endl;
    }
    fun();
    return 0;
}