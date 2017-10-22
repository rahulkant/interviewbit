vector<int> Solution::getRow(int A) {
    vector <int> v(A+1);
    int x = 1;
    for(int k=0; k<=A; k++)
    {
        v[k] = x;
        x = x*(A-k)/(k+1);
    }
    return v;
}
