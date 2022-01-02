void merge(int arr1[], int arr2[], int n, int m) {
	    
	     int i = n-1;
	     int j = 0;
	     
	   //  comparing last element of 1st array with first element of 2nd array
	   //  if arr1[n-1] > arr2[0] -> swap both
	   //  after swaping take 1 step back in arr1 and 1 step forward in arr2
	   //  else break and sort both array and return
	     
	     while(i >= 0 && j < m) {
	         if(arr1[i] > arr2[j]) {
	             int t = arr1[i];
	             arr1[i] = arr2[j];
	             arr2[j] = t;
	         }
	         else 
	            break;
	       i--;
	       j++;
	     }
	     
	     sort(arr1, arr1+n);
	     sort(arr2, arr2+m);
	    
	}