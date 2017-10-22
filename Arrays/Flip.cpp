vector<int> Solution::flip(string A) {
    vector<int> ans;
    int n = A.size();
    for(int i=0; i<n; i++)
        if(A[i] == '1')
            A[i] = -1;
        else
            A[i] = 1;
    
    int max_so_far = -1, max_end_here = 0;
    int start = 0;
    for(int i=0; i<n; i++)
    {
        max_end_here += A[i];
        if(max_so_far < max_end_here)
        {
            max_so_far = max_end_here;
            if(ans.size())
            {
                ans.pop_back();
                ans.pop_back();
            }
            ans.push_back(start+1);
            ans.push_back(i+1);
        }
        
        if(max_end_here < 0)
        {
            max_end_here = 0;
            start = i+1;
        }
    }
    return ans;
}
