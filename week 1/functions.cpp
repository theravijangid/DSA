#include<iostream>
using namespace std;

// void printName(int n) {
//     for(int i=0; i<n; i++) {
//         cout<<"ravi"<<endl;
//     }
// }

int addition(int a,int b) {
    return a+b;
}


int main(){
    int a,b;
    cout<<"Enter the value of a " << endl;
    cin>>a;
    cout<<"Enter the value of b " << endl;
    cin>>b;
    
    // Function call
    // printName(n);

    //address
    // int n;
    // cout<<"Address of n  "<<&n<<endl;

    // function to add to num
    int sum = addition(a,b);
    cout<<"Addition result is : "<<sum<<endl;
}