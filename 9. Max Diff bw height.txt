int getMinDiff(int arr[], int n, int k) {
        
        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(arr[i] - k > 0)
                arr[i] -= k;
            else 
                arr[i] += k;
                
            mn = (arr[i] < mn) ? arr[i] : mn;
            mx = (arr[i] > mx) ? arr[i] : mx;
        }
        
        return mx-mn;
    }