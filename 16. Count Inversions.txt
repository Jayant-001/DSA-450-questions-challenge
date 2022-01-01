// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long low, long long mid, long long high) {
    
        long long int inv_count = 0;
        long long i = low;
        long long j = mid+1;
        long long k = low;
        long long ans[high+1];
        while(i <= mid && j <= high) {
            if(arr[i] <= arr[j]) 
                ans[k++] = arr[i++];
            else {
                ans[k++] = arr[j++];
                inv_count = inv_count + (mid-i + 1);
            }
        }
    
        while(i <= mid) 
            ans[k++] = arr[i++];
        while(j <= high)
            ans[k++] = arr[j++];
    
        for(long long k = low; k <= high; k++)
            arr[k] = ans[k];
        
        return inv_count;
    }
    
    long long int merge_sort(long long arr[], long long low, long long high) {

        long long int ct = 0;
        if(low < high) {
            
            long long mid = (low+high) / 2;
             ct += merge_sort(arr, low, mid);
             ct += merge_sort(arr, mid+1, high);
             ct += merge(arr, low, mid, high);
        
        }
        return ct;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int ans = merge_sort(arr, 0, N-1);
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends