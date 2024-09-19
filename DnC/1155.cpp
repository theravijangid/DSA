#include <iostream>
using namespace std;

int numRollsToTarget(int n, int k, int t) {
  //base case
  if(n == 0 && t == 0) return 1;
  if(n == 0 && t != 0) return 0;
  if(n != 0 && t == 0) return 0;
  if(t < 0) return 0;

  int ans = 0;
  for(int i = 1; i <= k; i++) {
    ans = ans + numRollsToTarget(n-1, k, t - i);
  }
  return ans;
}

int main() {
  // 1155
  int n = 2, k = 6, target = 7;
  int ans = numRollsToTarget(n, k ,target);
  cout<< ans << endl;
  return 0;
}