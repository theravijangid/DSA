class Solution {
  public:
  
    bool isPossibleSoln(int arr[], int n, int m, int mid) {
        int pageSum = 0;
        int c = 1;
        for(int i=0; i<n; i++) {
            if(arr[i] > mid) {
                return false;
            }
                    
            if(pageSum + arr[i] > mid) {
                c++;
                pageSum = arr[i];
                if(c > m) {
                    return false;
                }
            }
            else {
                pageSum = pageSum + arr[i];
            }
        }
        return true;
    }
    
    
    // Function to find minimum number of pages.
    int findPages(int n, int arr[], int m) {
        int start = 0;
        int end = accumulate(arr, arr+n, 0);

        if(m > n) return -1;
        
        int ans = -1;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(isPossibleSoln(arr, n, m, mid)) {
                ans = mid;
                end = mid-1;
            }   
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};