vector<vector<int>> merge(vector<vector<int>>& arr) {
        
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size(); i++) {
            if(ans.size() == 0 || ans[ans.size()-1][1] < arr[i][0])
                ans.push_back(arr[i]);
            else if(ans[ans.size()-1][1] >= arr[i][0]) {
                int t = max(ans[ans.size()-1][1], arr[i][1]);
                ans[ans.size()-1][1] = t;
            }
        }
        
        return ans;
        
    }