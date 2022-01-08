class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    if(n == 0)
	        return 0;
	        
	   long long res = arr[0];
	   long long curMax = 1;
	   long long curMin = 1;
	   
	   for(int i = 0; i < n; i++) {
	       
	       long long num = arr[i];
	       if(arr[i] == 0){
	           curMax = curMin = 1;
	           continue;
	       }
	       
	       curMax = max(max(arr[i]*curMax, arr[i]*curMin), num);
	       curMin = min(min(arr[i]*curMax, arr[i]*curMin), num);
	       res = max(res, curMax);
	   }
	   
	   return res;
	}
};