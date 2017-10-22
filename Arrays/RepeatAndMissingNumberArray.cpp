vector<int> Solution::repeatedNumber(const vector<int> &V) {
    vector<int> ret;
    long long sum = 0, squareSum = 0, temp;
    
    for (int i=0; i<V.size(); i++)
    {
       temp = V[i];
       sum += temp;
       sum -= (i + 1);
       squareSum += (temp * temp);
       squareSum -= ((long long)(i + 1) * (long long)(i + 1));
    }
    // sum = M - R
    // squareSum = M^2 - R^2 = (M - R)(M + R)
    // squareSum / sum = M + R
    squareSum /= sum;
    
    // Now we have M + R and M - R. Let's figure out M and R now. 
    int M = (int)((sum + squareSum)/2);
    int R = squareSum - M;
    
    ret.push_back(M);
    ret.push_back(R);
    return ret;
}
