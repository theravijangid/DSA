#include<iostream>
using namespace std;

int partition(int* arr, int s, int e) {
    // step 1 - choose a pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step2 - find the right position for pivot and place it in its right posistion
    int count = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivotElement) {
            count++;
        }
    }

    // now i have the pivots right position i.e the index
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // step3 - left me chote and right me bade
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivotElement) {
            i++;
        }
        while(arr[j] > pivotElement) {
            j--;
        }

        // 2 case ho sakte h ->
        // A -> you found the element to swap
        // B-> no need to swap
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    } 
    return pivotIndex;
}

void QuickSortRE(int* arr, int s, int e) {
    // Base case
    if(s >= e) return;

    // partition logic
    int p = partition(arr, s, e);

    // left RR
    QuickSortRE(arr,s, p - 1);

    // Right RR
    QuickSortRE(arr, p + 1, e);
}

int main() {
    int arr[] = {8,1,3,4,20,50,50,50,50,50,5,1,1,1,1,1,2,2,2,50,30};
    int n = 21;

    QuickSortRE(arr, 0, n-1);

    for(int i=0; i< n; i++) {
        cout<< arr[i] << " ";
    }
    cout << endl;
    return 0;
}