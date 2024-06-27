#include<iostream>
using namespace std;

// void printName(int n) {
//     for(int i=0; i<n; i++) {
//         cout<<"ravi"<<endl;
//     }
// }

// int addition(int a,int b) {
//     return a+b;
// }


// int maxNum(int a, int b, int c) {
//     if(a>b && a>c) {
//         return a;
//     }
//     else if(b>c && b>c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }


void counting(int n){
    for(int i=1; i<=n; i++) {
        cout<<i<<" ";
    }
    cout<<endl;
}


char getGrade(int n) {
//     if(n >= 90) {
//         return 'A';
//     }
//     else if(n >= 80) {
//         return 'B';
//     }
//     else if(n >= 70) {
//         return 'C';
//     }
//     else if(n >= 60) {
//         return 'D';
//     }
//     else {
//         return 'F';
//     }


switch (n/10)
{
case 10:
case 9: return 'A';
    break;
case 8: return 'B';
    break;
case 7: return 'C';
    break;
case 6: return 'D';
    break;
default: return 'F';
    break;
}
}

int sumOfEven(int n) {
    int sum=0;
    for(int i=2; i<=n; i+=2) {
        sum = sum + i;
    }
    return sum;
}


int main(){
    // int a,b,c;
    // cout<<"Enter the value of a " << endl;
    // cin>>a;
    // cout<<"Enter the value of b " << endl;
    // cin>>b;
    // cout<<"Enter the value of c " << endl;
    // cin>>c;

    int n;
    cin>>n;
    
    // Function call
    // printName(n);

    //address
    // int n;
    // cout<<"Address of n  "<<&n<<endl;

    // function to add to num
    // int sum = addition(a,b);
    // cout<<"Addition result is : "<<sum<<endl;


    //Maximum  of three
    // cout<<"maximum of three is : "<<maxNum(a,b,c);


    //counting from 1 to N
    // counting(n);

    // char finalGrade = getGrade(n);
    // cout<<"Final grade "<< finalGrade;

    // Sum of even number upto N
    int ans = sumOfEven(n);
    cout<<"Sum upto "<< n << " is " << ans <<endl;

 return 0;
}