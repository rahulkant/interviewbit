vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size(), carry=1, i=0;
    vector<int> ans;
    for(int i=n-1; i>=0; i--)
    {
        int sum = A[i]+carry;
        carry = sum/10;
        ans.push_back(sum%10);
    }
    ans.push_back(carry);
    
    reverse(ans.begin(), ans.end());
    
    while(ans[i] == 0)
        ans.erase(ans.begin()+i);
    
    return ans;
}