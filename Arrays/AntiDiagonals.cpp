vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > ans;
    int n = A.size();
   
    int a, b, diag=0, row=0;
    while(row!=n && diag!=n)
    {
        a = row;
        b = diag;
        vector<int> temp;
        while(a>=0 && b>=0 && a<n && b<n)
        {
            temp.push_back(A[a][b]);
            a++;
            b--;
        }
        ans.push_back(temp);
       
        if(diag == (n-1))
            row++;
        
        else diag++;
    }
    return ans;
}
