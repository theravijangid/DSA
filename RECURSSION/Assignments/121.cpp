#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void findProfit(vector<int>&arr, int i, int& minPrice, int& maxProfit) {
    // B.C
    if(i >= arr.size()) {
        return;
    }

    if(arr[i] < minPrice) {
        minPrice = arr[i];
    }
    
    if((arr[i] - minPrice) > maxProfit) {
        maxProfit = arr[i] - minPrice;
    }
    findProfit(arr, i + 1,minPrice, maxProfit);
}

int main() {  
    vector<int> arr = {2,4,1};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    findProfit(arr, 0,minPrice, maxProfit);
    cout<< maxProfit << endl;
    return 0;
} 
