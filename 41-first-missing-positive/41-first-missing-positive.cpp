class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        
        
        //put each element in its right place
        int n=A.size();
        for(int i = 0; i < n; ++ i)
            while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);
        
        
        //find first element not on its right place 
        for(int i = 0; i < n; ++ i)
            if(A[i] != i + 1)
                return i + 1;
        
        
        //if every element is at its place ans is arr size+1
        return n + 1;
       
    }
};