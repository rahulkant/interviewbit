// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int count = 0;
    int diff1, diff2 = 0;
    if(X.size()==1)
        return 0;
    for(int i=0; i<X.size()-1; i++)
    {
        diff1 = abs(X[i+1]-X[i]);
        diff2 = abs(Y[i+1]-Y[i]);
        if(diff1 > diff2)
            count += diff1;
        else
            count += diff2;
    }
    return count;
}