
class Solution {
public:
    vector<int> factorial(int n){
        // code here
        
        vector<int> res;
        res.push_back(1);
        for(int i = 2; i <= n; i++) {
            int carry = 0;
            for(int k = 0; k < res.size(); k++) {
                int val = res[k]*i+carry;
                res[k] = val%10;
                carry = val/10;
            }
            while(carry != 0) {
                res.push_back(carry%10);
                carry /= 10;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};