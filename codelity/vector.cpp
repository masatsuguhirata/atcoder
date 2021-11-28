void coutvec(vector<int> &A){
	//  rep(i,A.size()) cout << A[i] << " ";
	//  cout << endl;
}


int max(std::vector<int> v)
{
    int maxVal = INT_MIN;       // 整数最小値
    for(int i = 0; i < (int)v.size(); ++i) {
        if( v[i] > maxVal )
            maxVal = v[i];
    }
    return maxVal;
}
