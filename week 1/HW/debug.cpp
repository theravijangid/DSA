#include<iostream>
using namespace std;


int binaryToDecimal(int b){
    int ans=0;
    int c=0;
    while(b){
        ans=ans+(b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
}

int main(){
    // Q1
    // int n;
    // cin>>n;
    // int sum=0;
    // for(int i=0;i<n;++i){
    //     sum+=i;
    // }
    // cout<<sum<<endl; 

    // Q2
    // int k, n;
    // cout << "Enter the number of rows : ";
    // cin >> n;
    // cout << " ";
    // for (int i=1; i<=n; i++)
    // {

    // for (int j=1; j<=n-i; j++)
    // cout << " ";

    // for (int j=1,k=i-1; j<=2*i-1; j++,k--)
    // {
    // if (1 || j <= k)
    // cout << j;
    // else
    // cout << k;
    // }
    // cout << endl;

    // cout << " ";

    // }
    // return 0;


    // Q3
    // size of the triangle
    // int size = 5;
    // // loop to print the pattern
    // for (int i = 0; i < size; i++) {
    //     // print column
    //     for (int j = 0; j <= i; j++) {
    //     cout << "*";
    //     }
    //     cout << "\n";
    // }
    // return 0;


    // Q4
    // size of the pyramid
    // int size; 
    // cin>>size;
    // for (int i = 0; i < size; i++) {
    //     // print spaces
    //     for (int j = 0; j < i; j++) {
    //     cout << " ";
    //     }
    //     // print stars
    //     for (int k = 0; k < 2 * size - 1; k++) {
    //         if(k==0 || i==0 || k<2*size-2*i-1) {
    //         cout << "*";
    //         } else {
    //             cout<<" ";
    //         }
    //     }
    //     cout << "\n";
    // }
    // return 0;


    // Q5
    // int size;
    // cin>>size;

    // for (int i = size / 2; i < size; i += 2) {
    //     // print first spaces
    //     for (int j = 1; j < size - i; j += 2) {
    //     cout << " ";
    //     }
    //     // print first stars
    //     for (int j = 1; j < i + 1; j++) {
    //     cout << "*";
    //     }
    //     // print second spaces
    //     for (int j = 1; j < size - i + 1; j++) {
    //     cout << " ";
    //     }
    //     // print second stars
    //     for (int j = 1; j < i + 1; j++) {
    //     cout << "*";
    //     }
    //     cout << "\n";
    // }
    // // lower part
    // // inverted pyramid
    // for (int i = 0; i < size; i++) {
    //     for (int j = 0; j < i; j++) {
    //     cout << " ";
    //     }
    //     for (int j = 0; j < 2 * (size - i) -1; j++) {
    //     cout << "*";
    //     }
    //     cout << "\n";
    // }
    // return 0;


    // Q6
    // int b;
    // cin>>b;
    // cout<<"ans is: "<<binaryToDecimal(b);


    // Q7
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2; break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2; break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2; break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2; break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
