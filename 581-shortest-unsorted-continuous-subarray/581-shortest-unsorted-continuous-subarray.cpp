class Solution {
public:
    
    
    int findUnsortedSubarray(vector<int>& A)
    {
        int n = A.size();
        int end = -1, max = A[0];
        for (int i = 1; i < n; i++)
            if (A[i] < max)  end = i;
            else    max = A[i];

        int start = 0, min = A[n - 1];
        for (int i = n - 2; i >= 0; i--)
            if (A[i] > min)  start = i;
            else min = A[i];

        return end - start + 1;
    
        
    }
};