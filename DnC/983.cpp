#include <iostream>
#include<vector>
using namespace std;

int mincostTickets(vector<int>&days, vector<int>&costs, int i) {
  // Base case
  if(i >= days.size()) return 0;

  // soln for 1 case
  // 1 Day pass taken
  int cost1 = costs[0] + mincostTickets(days, costs, i + 1);

  // 7 Day pass taken
  int passEndDay = days[i] + 7 - 1;
  int j = i;
  while(j < days.size() && days[j] <= passEndDay) {
    j++;
  }
  int cost7 = costs[1] + mincostTickets(days, costs, j);

  // 30 Day pass taken
  passEndDay = days[i] + 30 - 1;
  j = i;
  while(j < days.size() && days[j] <= passEndDay) {
    j++;
  }
  int cost30 = costs[2] + mincostTickets(days, costs, j);

  return min(cost1, min(cost7, cost30));
}

int main() {
  // leetcode 983
  vector<int> days = {1,4,6,7,8,20};
  vector<int> costs = {2,7,15};
  int ans = mincostTickets(days, costs, 0);
  cout<<ans << endl;

  return 0;
}