vector<int> Solution::maxset(vector<int> &A) {
    int n = A.size();
    long int max_so_far = INT_MIN, max_end_here = 0;
    int seg = 0, seg_max = 0, start = 0, lend, start_max;
    for(int i=0; i<n; i++)
    {
        if(A[i] >= 0)
        {
            max_end_here += A[i];
            seg++;
            if(max_end_here > max_so_far || (max_end_here == max_so_far && seg > seg_max) )
            {
                max_so_far = max_end_here;
                seg_max = seg;
                start_max = start;
                lend = i;
            }
        }
        else
        {
            max_end_here = 0;
            seg = 0;
            start = i+1;
        }
    }
    vector<int> ans;
    if(start == n && max_so_far < 0)
        return ans;
    for(int j=start_max; j<=lend; j++)
        ans.push_back(A[j]);
        
    return ans;
}
