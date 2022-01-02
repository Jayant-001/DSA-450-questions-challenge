int getPairsCount(int arr[], int n, int k) {
        // code here
        
          map<int, int> m;
          int ct = 0;
          for(int i = 0; i < n; i++) {
            if(arr[i] < k) {
              ct += m[k-arr[i]];
              m[arr[i]]++;
            }
        
          }
        
          return ct;

    }