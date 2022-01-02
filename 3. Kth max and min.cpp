int kthSmallest(int v[], int l, int r, int k) {
        
        int n = r+1;
    	priority_queue<int> maxH;
    	for(int i = 0; i < n; i++){
    		maxH.push(v[i]);
    		if(maxH.size() > k) {
    			maxH.pop();
    		}
    	}
        
        return maxH.top();
    }