#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

bool findKey(int arr[][3], int key) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] == key) return true;
        }
    }
    return false;
}

int findMax(int arr[][3]) {
    int max = INT_MIN;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] > max) {
                max=arr[i][j];
            }
        }
    }
    return max; 
}

int findMin(int arr[][3]) {
    int min = INT_MAX;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] < min) {
                min=arr[i][j];
            }
        }
    }
    return min; 
}


void transpose(int arr[][3], int transposeArr[][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArr(int arr[][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() {
    // int arr[3][3];

    // int brr[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,2,8} };

    // cout<<brr[2][2]<<endl;

    // Row wise access
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cout<<brr[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }


    // col wise access
    // for(int col=0; col<3; col++) {
    //     for(int row=0; row<3; row++) {
    //         cout<<brr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // } 

    // int arr[3][3]= {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,2,8} };

    // row wise input
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin>>arr[i][j];
    //     }
    // } 

    // col wise input
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin>>arr[j][i];
    //     }
    // }

    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cout<<arr[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }


    // Q row sum print
    // int arr[3][3]= {
    //     {1,2,3},
    //     {4,5,6},
    //     {200,2,8} };

    // row wise sum
    // cout<<"Printing row wise sum"<<endl;
    // for(int i=0; i<3; i++) {
    //     int sum = 0;
    //     for(int j=0; j<3; j++) {
    //         sum = arr[i][j] + sum;
    //     }
    //     cout<<sum<<" ";
    // }
    // cout<<"Printing col wise sum"<<endl;
    // //col wise sum
    // for(int i=0; i<3; i++) {
    //     int sum = 0;
    //     for(int j=0; j<3; j++) {
    //         sum = arr[j][i] + sum;
    //     }
    //     cout<<sum<<" ";
    // }


    // finding key using linear search
    // int arr[3][3]= {
    //     {1,2,3},
    //     {4,5,6},
    //     {200,2,8} };
    // int key;
    // cin>> key;

    // bool ans = findKey(arr, key);
    // if(ans) {
    //     cout<<"Key found";
    // } else{
    //     cout<<"Not found";
    // }

    // finding max
    // int arr[3][3]= {
    //     {1,2,3},
    //     {4,5,6},
    //     {200,2,8} };
    
    // int ans = findMax(arr);
    // cout<<"Maximum is: "<<ans<<endl;
    // cout<<"Minimum is "<<findMin(arr);


    // Transpose of a matrix
    // int arr[3][3]= {
    //     {1,2,3},
    //     {4,5,6},
    //     {200,2,8} };
    // int transposeArr[3][3];
    // cout<<"Printing original array"<<endl;
    // printArr(arr);
    // transpose(arr, transposeArr);
    // cout<<"After transpose"<<endl;
    // printArr(transposeArr); 
    

    // 2D array using vector
    // vector<vector<int> > arr; 
    
    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0; i<arr.size(); i++) {
    //     for(int j=0; j<arr[0].size(); j++) {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row=3;
    // int col=5;
    // vector<vector<int> > arr(row, vector<int>(col, 78));

    // vector<vector<int> > brr(5, vector<int>(5, -8));
    // cin>>brr[3][4];
    // cout<<brr[3][4];
    // for(int i=0; i<brr.size(); i++) {
    //     for(int j=0; j<brr[i].size(); j++) {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}