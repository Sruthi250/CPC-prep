//interviewbit
int Solution::threeSumClosest(vector<int> &A, int B) {
    int N = A.size() - 1;
    sort(A.begin(),A.end());
    
    long mini=1000000000, res=0;
    for(int i=0; i<=N-2; i++)
    {
        int l = i+1, h = N;
        while(l < h){
            res = (long) A[i]+A[l]+A[h];
            if(res == B) 
            return B;
            if(abs(res - B) < abs(B - mini))
                mini = res;
            else if(res > B)
                h--;
            else
                l++;
        }
    }
    return mini;
}


