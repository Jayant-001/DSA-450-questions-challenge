int doUnion(int arr1[], int n, int arr2[], int m)  {
        
            
    	int mx = INT_MIN;
    	for(int i = 0; i < n; i++) {
    		mx = (arr1[i] > mx) ? arr1[i] : mx;
    	}
    
    	for(int i = 0; i < m; i++) {
    		mx = (arr2[i] > mx) ? arr2[i] : mx;
    	}
    
    	vector<int> v(mx+1, 0);
    	for(int i = 0; i < n; i++) {
    		v[arr1[i]] = 1;
    	}
    
    	for(int i = 0; i < m; i++) {
    		v[arr2[i]] = 1;
    	}
    
    	int ct = 0;
    	for(int i = 1; i < v.size(); i++) {
    		if(v[i] == 1) 
    			ct++;
    	}
        return ct;
    }