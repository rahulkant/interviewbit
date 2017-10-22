vector<vector<int> > Solution::generate(int A) {
    if(A==0)
        return vector<vector<int>> ();
    vector< vector<int>> v(A, vector<int>(A));
    v[0][0] = 1;
    
    for(int i=1; i<A; i++)
        for(int j=0; j<=i; j++)
                v[i][j] = v[i-1][j] + v[i-1][j-1];
                
    for(int i=0; i<A; i++)
        for(int j=0; j<A; j++)
            if(v[i][j] == 0)
                v[i].pop_back();
    return v;
}
