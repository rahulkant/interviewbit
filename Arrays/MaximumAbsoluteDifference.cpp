int Solution::maxArr(vector<int> &A) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, max4 = INT_MIN, ans = INT_MIN;
    for(int i=0; i<A.size(); i++)
    {
        max1 = max(max1, A[i]+i);
        max2 = max(max2, A[i]-i);
        max3 = max(max3, -A[i]+i);
        max4 = max(max4, -A[i]-i);
    }
    
    for(int j=0; j<A.size(); j++)
    {
        ans = max(ans, max1-A[j]-j);
        ans = max(ans, max2-A[j]+j);
        ans = max(ans, max3+A[j]-j);
        ans = max(ans, max4+A[j]+j);
    }
    return ans;
}
