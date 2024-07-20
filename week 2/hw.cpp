#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void findMissing(int *a,int n) {
    // visited method
    // for(int i=0; i<n; i++) {
    //     int index = abs(a[i]);
    //     if(a[index - 1] > 0) {
    //         a[index - 1] *= -1;
    //     }
    // }
    // // for(int i=0; i<n; i++) {
    // //     cout<<a[i]<<" ";
    // // }
    // // all +ve
    // for(int i=0; i<n; i++) {
    //     if(a[i] > 0) {
    //         cout<<i+1<<" ";
    //     }
    // }


    // SORTING + SWAPPING METHOD
    int i =0;
    while(i<n) {
        int index = a[i] - 1;
        if(a[i] != a[index]){
            swap(a[i], a[index]);
        }
        else {
            i++;
        }
    }
    // for(int i=0; i<n; i++) {
    //     cout<<a[i]<<" ";
    // }
    for(int i=0; i<n; i++) {
        if(a[i] != i+1) {
            cout<<i+1<<" ";
        }
    }
}

void wavePrintCol(vector<vector<int>>a) {
    int m=a.size();
    int n=a[0].size();
    for(int startCol = 0; startCol<n; startCol++) {
        // even no of col => Top to Bottom
        if((startCol & 1) == 0){
            for(int i=0; i<m; i++) {
                cout<<a[i][startCol]<<" ";
            }
        }
        else {
            // bottom to top -> odd cols
            for(int i=m-1; i>=0; i--) {
                cout<<a[i][startCol]<<" ";
            }
        }
        
    }
}

void wavePrintRow(vector<vector<int>>a) {
    int m=a.size();
    int n=a[0].size();
    for(int startRow = 0; startRow<m; startRow++) {
        //left to right  
        if((startRow & 1) == 0) {
            for(int i=0; i<n; i++) {
                cout<<a[startRow][i]<<" ";
            }
        } 
        else {
            // right to left
            for(int i=n-1; i>=0; i--) {
                cout<<a[startRow][i]<<" ";
            }
        }  
    }
}


void spiralMatrix(vector<vector<int>> a) {
    int m = a.size();
    int n = a[0].size();
    int totalCount = m*n;

    int startingRow = 0;
    int endingCol = n-1;
    int endingRow = m-1;
    int startingCol = 0;

    int count = 0;
    while(count < totalCount) {
        //print starting row
        for(int i=startingCol; i<=endingCol && count<totalCount; i++) {
            cout<<a[startingRow][i]<<" ";
            count++;
        }
        startingRow++;

        // print ending col
        for(int i=startingRow; i<=endingRow && count<totalCount; i++) {
            cout<<a[i][endingCol]<<" ";
            count++;
        }
        endingCol--;

        // print ending row
        for(int i=endingCol; i>=startingCol && count<totalCount; i--) {
            cout<<a[endingRow][i]<<" ";
            count++;
        }
        endingRow--;

        // print starting col
        for(int i=endingRow; i>=startingRow && count<totalCount; i--) {
            cout<<a[i][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }

}

string addVectors(vector<int> a , vector<int> b) {
    string ans;

    int carry=0;
    int i=a.size()-1;
    int j=b.size()-1;

    while(i>=0 && j>=0) {
        int x = a[i] + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        int carry = x/10;
        i--;
        j--;
    }

    while (i>=0){
        int x = a[i] + 0 + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        int carry = x/10;
        i--;
    }
    
    while (j>=0)
    {
        int x = 0 + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        int carry = x/10;
        j--;
    }

    if(carry) {
        ans.push_back(carry + '0');
    }

    while(ans[ans.size()-1] == '0') {
        ans.pop_back();
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> factorial(int N) {
    vector<int> ans;
    ans.push_back(1);
    int carry=0;

    for(int i=2; i<=N; i++) {
        for(int j=0; j<ans.size(); j++) {
            int x= ans[j]*i+carry;
            ans[j] = x%10;
            carry = x/10;
        }
        while(carry) {
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}

int main() {
    // SORT LEETCODE 75
    // vector<int> arr{1,1,0,2,0,1,2,0,1};

    // int s=0;
    // int e = arr.size() -1;
    // int i=0;
    // while(i<=e) {
    //     if(arr[i] == 0) {
    //         swap(arr[s], arr[i]);
    //         i++;
    //         s++;
    //     }
    //     else if(arr[i] == 1) {
    //         i++;
    //     }
    //     else{
    //         swap(arr[i], arr[e]);
    //         e--;
    //     }
    // }


    // SORT -ve and +ve
    // vector<int> arr{1,2,3,-1,-2,6,4};

    // int i=0;
    // int s=0;
    // int e=arr.size()-1;

    // while(i<=e) {
    //     if(arr[i] < 0) {
    //         swap(arr[i], arr[s]);
    //         i++;
    //         s++;
    //     }
    //     else {
    //         i++;
    //     }
    // }
    
    // ANOTHER SOL:- DUTCH FLAG ALGO APPROACH USING 2 POINTERS
    // vector<int> arr{1,2,3,-1,-2,0,6,4};
    // int l=0;
    // int h=arr.size()-1;
    // while(l<h) {
    //     if(arr[l] < 0) {
    //         l++;
    //     }
    //     else if(arr[h] > 0) {
    //         h--;
    //     }
    //     else{
    //         swap(arr[l], arr[h]);
    //     }
    // }

    // SORT 0 & 1
    // vector<int> arr{1,1,0,0,1,0};
    // int l=0;
    // int h=arr.size()-1;
    // while(l<h) {
    //     if(arr[l] == 0) {
    //         l++;
    //     }
    //     else if(arr[h] == 1) {
    //         h--;
    //     }
    //     else{
    //         swap(arr[l], arr[h]);
    //     }
    // }
    // for(auto val:arr) {
    //     cout<<val<< " "; 
    // }


    // 287. LEETCODE - FIND THE DUPLICATE NUMBER
    // sorting
    // vector<int> arr{3,2,1,2}; 
    // sort(arr.begin(), arr.end());

    // for(int i=0; i<arr.size()-1; i++) {
    //     if(arr[i] == arr[i+1]) {
    //         cout<<arr[i];
    //         return arr[i];
    //     }
    // }
    // return -1;


    // Visited solution by marking -ve
    // vector<int> arr{3,2,1,2};
    // int ans = -1;
    // for(int i=0; i<arr.size(); i++) {
    //     int index = abs(arr[i]);

    //     // already visited
    //     if(arr[index] < 0) {
    //         ans= index;
    //         break;
    //     }

    //     //visited mark
    //     arr[index] = arr[index] * -1;
    // }
    // cout<<ans;
    // return ans;


    // positioning method
    // vector<int> arr{3,3,1,2};
    // while(arr[0] != arr[arr[0]]){
    //     swap(arr[0], arr[arr[0]]);
    // }
    // cout<<arr[0];
    // return arr[0];


    //  MISSING ELEMENTS FROM AN ARRAY WITH DUPLICATES
    // int a[] = {1,4,3,4};
    // int n;
    // n = sizeof(a)/sizeof(int);
    // findMissing(a,n);


    // FIND FIRST REPEATING ELEMENT IN ARRAY    
    // int a[] = {1,2,3,3,4,4};
    // int n = sizeof(a)/sizeof(int);
    // for(int i=0; i<n; i++) {
    //     bool isRepeated;
    //     for(int j=i+1; j<n; j++) {
    //         if(a[i] == a[j]) {
    //             cout<<a[i+1]<<" ";
    //             isRepeated = true;
    //         }
    //     }
    //     if(isRepeated) break; 
    // }


    //  COMMON ELEMENTS IN 3 SORTED ARRAYS
    // vector<int> a{3,3,3};
    // vector<int> b{3,3,3};
    // vector<int> c{3,3,3};

    // int i=0,j=0,k=0;
    // int n1 = a.size();
    // int n2 = b.size();
    // int n3 = c.size();
    // while(i<n1 && j<n2 && k<n3) {
    //     while (i > 0 && a[i] == a[i - 1]) {
    //         i++;
    //     }
   
    //     while (j > 0  && b[j] == b[j - 1]) {
    //         j++;
    //     }

    //     while (k > 0 && c[k] == c[k - 1]) {
    //         k++;
    //     }

    //     if(a[i]==b[j] && b[j]==c[k]) {
    //         cout<<a[i]<<" ";
    //         i++;
    //         j++;
    //         k++;
    //     }
    //     else if(a[i] < b[j]) {
    //         i++;
    //     }
    //     else if(b[j] < c[k]) {
    //         j++;
    //     }
    //     else {
    //         k++;
    //     }
    // }


    // WAVE PRINT A MATRIX COL WISE
    // vector<vector<int>> a{
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // cout<<"PRinting col wise Wave form"<<endl;
    // wavePrintCol(a);
    // cout<<endl;
    // cout<<"PRinting row wise Wave form"<<endl;
    // wavePrintRow(a);


    // SPIRAL MATRIX
    // cout<<"PRinting spiral matrix"<<endl;
    // spiralMatrix(a);


    // ADD TWO ARRAYS
    // vector<int> a{1,2,3,4};
    // vector<int> b{9,2,3};

    // string ans = addVectors(a,b);
    // cout<<"sum: "<<ans<<endl;



    // FACTORIAL OF A LARGE NUMBER USING VECTOR/ ARRAY
    int N;
    cout<<"Enter number to find factorial"<<endl;
    cin>>N;
    
    vector<int> result = factorial(N);

    for(int digit : result) {
        cout<<digit;
    }

    return 0;
    
}



// DEBUGGING
// 1
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int left, int right, int x) {
//     if (right >= left) {
//         int mid = (left + right) / 2;
//         if (arr[mid] == x)
//             return mid;
//         else if (arr[mid] > x)
//             return binarySearch(arr, left, mid - 1, x);
//         else
//             return binarySearch(arr, mid + 1, right, x);
//     }
//     return -1;
// }

// int main() {
//     int arr[] = { 2, 3, 4, 10, 40 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 10;
//     int result = binarySearch(arr, 0, n - 1, x);
//     if (result == -1)
//         cout << "Element not found.";
//     else
//         cout << "Element found at index " << result << endl;
//     return 0;
// }

//2 
// int ceilIndex(int arr[], int n, int target) {
//   int left = 0;
//   int right = n - 1;
//   int ceil = -1;

//   while (left <= right) {
//     int mid = left + (right - left) / 2;
//     if (arr[mid] == target)
//       return mid;
//     else if (arr[mid] < target) {
//       left = mid + 1;
//     } else {
//       ceil = mid;
//       right = mid - 1;
//     }
//   }

//   return ceil;
// }


// 3
// for(int i=0; i<n; i++) {
    //     // find minimum
    //     int minIndex = i;
    //     for(int j=i+1; j<n; j++) {
    //         if(a[j] < a[minIndex]) {
    //             minIndex=j;
    //         }
    //     }
    //     //swap
    //     swap(a[i], a[minIndex]);
    // }

// 4
// for(int round =1; round<n; round++) {
//     bool isSwapped = false;
//     for(int j=0; j< n-round; j++) {
//         if(a[j] > a[j+1]){
//             isSwapped = true;
//             swap(a[j], a[j+1]);
//         }
//     }
//     if(!isSwapped) {
//         break;
//     }
// }