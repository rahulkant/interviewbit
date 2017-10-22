int myCompare(string A, string B){
    string AB = A.append(B);
    string BA = B.append(A);
    return AB.compare(BA) > 0 ? 1 : 0;
}

string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<string> s(n);
    string ans;
    for(int i=0; i<n; i++)
        s[i] = to_string(A[i]);
    sort(s.begin(), s.end(), myCompare);
    while(s[0] == "0")
        s.erase(s.begin());
    ans = accumulate(begin(s), end(s), ans);
    return ans;
}