#include<iostream>
using namespace std;

// BEST APPROACH FOR QUICKSORT
void quickSort(int arr[], int start, int end) {
    // BASE CASE
    if(start >= end) return;

    int i = start - 1;
    int j = start;
    int pivot = end;

    while(j < pivot) {
        if(arr[j] < arr[pivot]) {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;  // i is the right postion for pivot element
    swap(arr[i], arr[pivot]); // placed pivot at its right index or postion

    // RE call for left side sort
    quickSort(arr, start, i-1);
    // RE call for right
    quickSort(arr, i+1, end);
}


int main() {
    int arr[8] = {7,2,1,8,6,3,5,4};
    quickSort(arr, 0, 8-1);
    for(int i = 0; i < 8 ; i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}