#include<iostream>
using namespace std;

void solve(int arr[]) {
    cout<<"Size inside solve function : "<< sizeof(arr) << endl;
    cout<< "arr : "<<arr<<endl;
    cout<< "&arr : "<<&arr<<endl;
    arr[0] = 100;
}

void update(int* p) {
    cout<< "Address stored inside p is : "<< p <<endl;
    cout<<"Address of p : "<< &p << endl;
    *p = *p + 10;
}

int main() {
    // int arr[4] = {10,20,30,40};

    // cout<< arr << endl;
    // cout<< arr[0] << endl;
    // cout<< &arr << endl;
    // cout<< &arr[0] << endl;

    // int* p = arr;
    // cout<< p << endl;
    // cout<< &p << endl; 


    // cout<< *arr << endl;
    // cout<< arr[0] << endl;

    // cout<< *arr + 1 << endl;
    // cout<< *(arr) + 1 << endl;
    // cout<< *(arr + 1) << endl;
    // cout<< arr[1] << endl; 

    // cout<< *(arr + 2) << endl;
    // cout<< arr[2] << endl;      

    // cout<< *(arr + 3) << endl;
    // cout<< arr[3] << endl; 

    // int arr[10];
    // cout<< sizeof(arr) << endl;

    // int* p = arr;
    // cout<< sizeof(p) << endl;
    // cout<< sizeof(*p) << endl;


    // char ch[10] = "ravi";
    // char* c = ch;

    // cout<< ch << endl;
    // cout<< &ch << endl;
    // cout<< ch[0] << endl;

    // cout<< &c << endl;
    // cout<< *c << endl;
    // cout<< c << endl;


    // char name[10] = "SherBano";
    // char* c = &name[0];

    // cout<< name << endl;
    // cout<< &name << endl;
    // cout<< *(name + 3) << endl;
    // cout<< c << endl;
    // cout<< &c << endl;
    // cout<< *(c + 3) << endl; 
    // cout<< c + 2 << endl;
    // cout<< *c << endl;  
    // cout<< c + 8 << endl;


    // char ch = 'v';
    // char* cptr = &ch;

    // cout<< cptr << endl;


    // char name[10] = "ravi";
    // cout<< name << endl;
    
    // char* c = "ravi";
    // cout<< c <<  endl;  


    // int arr[10] = {1,2,3,4};
    // cout<<"Size inside main function : "<<sizeof(arr)<< endl;
    // cout<<arr<<endl;
    // cout<<&arr << endl;

    // for(int i=0; i<10; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<< endl;
    // cout<< endl << endl << "Now calling the solve function"<< endl;

    // solve(arr);

    // cout<<"After calling inside main function"<< endl;
    // for(int i=0; i<10; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<< endl;


    // int a = 5;
    // cout<<"Address of a : "<< &a << endl;
    // int* ptr = &a;
    // cout<<"Address stored in ptr : "<< ptr << endl;
    // cout<<"Address of ptr inside main function : "<< &ptr << endl;
    // update(ptr);
    // cout<<"Value of a : "<< a << endl;


    // WILD POINTERS - AN UNINITIALIZED OR DELETED POINTERS
    // int* ptr;
    // cout<<*ptr<<endl;


    // DELETING A POINTER
    // int* ptr = new int;
    // delete ptr;
    // cout<<*ptr<<endl;


    // VOID POINTERS -- USED FOR DYNAMIC MEMORY ALLOCATION
    // void* ptr;
    // int x = 10;
    // ptr = &x;
    // int* intPtr = static_cast<int*>(ptr);

    // cout<<*intPtr;

    // EXAMPLE OF USING A VOID POINTER FOR DYNAMIC MEMORY ALLOCATION
    int* ptr = new int;
    void* voidptr = ptr;
    int* newptr = static_cast<int*>(voidptr);
    *newptr = 10;
    cout<<*ptr<<endl;




    return 0;
}