class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
           
           int i = 0; 
           int j = 0;
           int k = 0; 
           vector<int> ans;
           
           while(i < n1 and j < n2 and k < n3) {
               
               if(A[i] == B[j] and B[j] == C[k]) {
                   ans.push_back(A[i]);
                   i++;
                   j++;
                   k++;
               }
               else 
               {
                    if(A[i] < B[j]) 
                        i++;
                    else {
                        if(B[j] < C[k]) {
                            j++;
                        }
                        else
                            k++;
                    }
                }
                while(A[i-1] == A[i]) i++;
                while(B[j-1] == B[j]) j++;
                while(C[k-1] == C[k]) k++;
           }
          
          return ans;
    }

};