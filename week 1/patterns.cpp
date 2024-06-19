#include<iostream>
using namespace std;

int main()
{
    // printing solid rectangle
    // for (int row = 0; row < 3; row+=1)
    // {
    //     for(int col=0; col <5; col+=1){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }


    //sqare pattern
    // for (int row = 0; row < 4; row+=1)
    // {
    //     for(int col=0; col <4; col+=1){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for (int row = 0; row < n; row+=1)
    // {
    //     for(int col=0; col <n; col+=1){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // hollow rectangle
    // int rowCount, colCount;
    // cin>>rowCount;
    // cin>>colCount;
    // for (int row = 0; row < rowCount; row+=1)
    // {
    //     if(row==0 || row==rowCount-1){
    //         for(int col=0; col <colCount; col+=1){
    //             cout<<" * ";
    //         }
    //     } 
    //     else{
    //         cout<<" * ";
    //         for(int i=0; i < colCount-2; i+=1){
    //             cout << "   ";
    //         }
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // Half pyramid
    // int n;
    // cin>>n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++){
    //         cout<< "* ";
    //     }
    //     cout<<endl;
    // }

    //Inverted half pyramid
    // for (int row = 0; row < n; row++) {
    // for (int col = 0; col < n - row; col++) {
    //   cout << "* ";
    // }
    // cout << endl;
    // }
    

    // Numeric half pyramid
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0 ; col < row + 1; col++) {
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }


    //inverted pyramid pattern
    // for (int row = 0; row < n; row++) {
    //     for (int col = 0 ; col < n - row ; col++) {
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }


    // Full pyramid
    int n;
    cin >> n;
    // for (int row = 0; row < n; row++) {
    //     for (int spc = 0; spc < n - row - 1; spc++) {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Inverted Full pyramid
    for (int row = 0; row < n; row++) {
        for (int spc = 0; spc < row; spc++) {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
} 
