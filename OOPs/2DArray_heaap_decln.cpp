#include<iostream>
#include<vector>
using namespace std;

int main() {
    int row = 5, col = 3;

    int** arr = new int*[row];

    for(int i=0; i< row; i++) {
        arr[i] = new int[col];
    }

    // printing
    // for(int i=0; i<row; i++) {
    //     for(int j=0; j<col; j++) {
    //         cout<< arr[i][j] << " ";
    //     }
    //     cout<< endl;
    // }


    // 2d array using vector
    vector<vector<int>> ar(5,vector<int>(5,0));
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cout<< ar[i][j] << " ";
        }
        cout<< endl;
    }

    return 0;
}