#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSoln(vector<int> cookRank, int nP, int mid) {
    int currP = 0;
    for(int i=0; i<cookRank.size(); i++) {
        int R = cookRank[i];
        int j = 1;
        int timeTaken = 0;

        while (true)
        {
            if(timeTaken + j * R <= mid) {
                currP++;
                timeTaken += j * R;
                j++;
            }
            else {
                break;
            }
        }
        if(currP >= nP) {
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int> cookRank, int nP, int nC) {
    int start = 0;
    int highestRank = *max_element(cookRank.begin(), cookRank.end());
    int end = highestRank * (nP * (nP + 1) / 2);
    int ans = -1;
    while(start <= end) {
        int mid = (start + end) >> 1;
        if(isPossibleSoln(cookRank, nP, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int tC;
    cin>>tC;
    while (tC--)
    {
        int nP, nC;
        cin>>nP >> nC;
        vector<int> cookRank;
        while(nC--) {
            int R;
            cin>>R;
            cookRank.push_back(R);
        }
        cout<< minTimeToCompleteOrder(cookRank, nP, nC);
    }
    return 0;
}