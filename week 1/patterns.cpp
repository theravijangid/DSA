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
    // for (int row = 0; row < n; row++) {
    //     for (int spc = 0; spc < row; spc++) {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Solid diamond
    // for (int row = 0; row < n; row++) {
    //     for (int spc = 0; spc < n - row - 1; spc++) {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++) {
    //     for (int spc = 0; spc < row; spc++) {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Hollow diamond
  //   for (int row = 0; row < n; row++) {
  //   // spaces
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   // stars
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     if (col == 0 || col == 2 * row) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // for (int row = 0; row < n; row++) {
  //   // spaces
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   // stars
  //   for (int col = 0; col < 2 * n - 2 * row - 1; col++) {
  //     if (col == 0 || col == 2 * n - 2 * row - 2) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }


  // flipped solid diamond
  // for(int row = 0; row < n; row++){
  //   for(int col=0; col<n-row; col++) {
  //     cout<<"*";
  //   }
  //   //spaces
  //   for(int col= 0; col<2*row+1;col++){
  //     cout<<" ";
  //   }

  //   for(int col=0;col<n-row; col++) {
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // for(int row=0; row<n; row++) {
  //   for(int col=0; col<row+1; col++) {
  //     cout<<"*";
  //   }
  //   //spaces
  //   for(int col=0; col<2*n-2*row-1; col++){
  //     cout<<" ";
  //   }
  //   for(int col=0; col<row+1; col++) {
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }


  // Fancy pattern #2
  // for(int row=0; row<n ; row++){
  //   for(int col = 0; col< row+1; col++) {
  //     cout<<row+1;
  //     if(col<row){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  // }
  // for(int row=0; row<n ; row++){
  //   for(int col = 0; col< n-row; col++) {
  //     cout<<n-row;
  //     if(col != n-row-1){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  // }


  // Alphabet Palindrome Pyramid 
  // for(int row=0; row<n; row++) {
  //   for(int col=0; col<row+1; col++) {
  //     int ans = col;
  //     char ch = ans + 'A';
  //     cout<<ch;
  //   }
  //   for(int col=row; col>=1; col--) {
  //     int ans = col-1;
  //     char ch = ans + 'A';
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }


  //H.W pattern
  // for(int row=0; row<n; row++) {
  //   for(int col=0; col<n-row-1; col++) {
  //     cout<<" ";
  //   }
  //   //numbers
  //   for(int col=0; col<row+1; col++) {
  //     cout<<col+row+1;
  //   }
  //   //reverse number
  //   int start = 2*row;
  //   for(int col=0; col<row; col++){
  //     cout<<start;
  //     start--;
  //   }
  //   cout<<endl;
  // }


  // numeric hollow half pyramid
  // for (int row = 0; row < n; row = row + 1) {
  //   if (row == 0 || row == n - 1) {
  //     for (int col = 0; col < row + 1; col++) {
  //       cout << col + 1 << " ";
  //     }
  //   } else {
  //     cout << 1;
  //     // spaces
  //     for (int col = 0; col < 2 * row - 1; col++) {
  //       cout << " ";
  //     }
  //     // numbers
  //     cout << row + 1;
  //   }
  //   cout << endl;
  // }

  //optimized soln of above
  // for(int row=0; row<n ; row++) {
  //   for(int col=0; col< row+1; col++) {
  //     if(col==0 || col == row || row==n-1) {
  //       cout<<col+1;
  //     }
  //     else {
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }


  // numeric hollow inverted  half pyramid
  // for (int row = 0; row < n; row = row + 1) {
  //   for (int col = 0; col < n - row; col++) {
  //     if (col == 0 || row == 0 || col == n - row - 1) {
  //       cout << row + 1 + col;
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }


  // numeric palindrome equilateral triangle
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << col + 1;
  //   }
  //   for (int col = row; col >= 1; col--) {
  //     cout << col;
  //   }
  //   cout << endl;
  // }


  // solid half pyramid
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }


  // floyds triangle
  // int count = 1;
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << count;
  //     count++;
  //   }
  //   cout << endl;
  // }

  // fancy pattern #1
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n + 3 - row; col++) {
  //     cout << "*";
  //   }
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << row + 1;
  //     if (col != row) {
  //       cout << "*";
  //     }
  //   }
  //   for (int col = 0; col < n + 3 - row; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }


  // Butter fly pattern
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*";
  //   }
  //   for (int col = 0; col < 2 * n - 2 * row - 2; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "*";
  //   }
  //   for (int col = 0; col < row * 2; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }


} 
