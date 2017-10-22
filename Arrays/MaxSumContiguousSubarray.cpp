int Solution::maxSubArray(const vector<int> &A) {
    
    int max_so_far = INT_MIN, max_end_here = 0;
    for(int i=0; i<A.size(); i++)
    {
        max_end_here += A[i];
        if(max_end_here > max_so_far)
            max_so_far = max_end_here;
            
        if(max_end_here < 0)
            max_end_here = 0;
    }
    return max_so_far;
}
