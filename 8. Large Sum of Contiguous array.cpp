long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxSum = arr[0];
        int curSum = arr[0];
        for(int i = 1; i < n; i++) {
            curSum = max(arr[i], curSum+arr[i]);
            maxSum = max(curSum, maxSum);
        }
        
        
        return (long long) maxSum;
    }