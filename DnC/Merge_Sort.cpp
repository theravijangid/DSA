#include <iostream>
using namespace std;

void merge(int* arr, int s, int e) {
  int mid = (s+e)/2;

  int len1 = mid - s + 1;
  int len2 = e - mid;

  int* leftarr = new int[len1];
  int* rightarr = new int[len2];

  // copy values
  int k = s;
  for(int i=0; i<len1; i++) {
    leftarr[i] = arr[k];
    k++;
  }

  k = mid + 1;
  for(int i=0; i<len2; i++) {
    rightarr[i] = arr[k];
    k++;
  }

  // merege logic
  int leftIndex= 0;
  int rightIndex = 0;
  int mainArrIndex = s;
  while(leftIndex < len1 && rightIndex < len2) {
    if(leftarr[leftIndex] < rightarr[rightIndex]) {
      arr[mainArrIndex++] = leftarr[leftIndex++];
    }
    else{
      arr[mainArrIndex++] = rightarr[rightIndex++];
    }
  }

  // copy logic for left array
  while(leftIndex < len1) {
    arr[mainArrIndex++] = leftarr[leftIndex++]; 
  }

  // copy logic for rigth array
  while(rightIndex < len2) {
    arr[mainArrIndex++] = rightarr[rightIndex++]; 
  }
}


void mergeSort(int* arr, int s, int e) {
  // base case
  if(s >= e) return;

  int mid = (s+e)/2;
  // left part sort kardo recurssion se
  mergeSort(arr,s, mid);

  // right part sort kardo recurssion se
  mergeSort(arr, mid+1, e);

  // now merger 2 sorted arrays
  merge(arr,s, e);
}

int main() {
  int arr[] = {1,5,2,4,1,3,6};
  int n = 7;

  mergeSort(arr, 0, n-1);
  for(int i=0; i<n; i++) {
    cout<<arr[i] << " ";
  }
  cout<< endl;

  return 0;
}