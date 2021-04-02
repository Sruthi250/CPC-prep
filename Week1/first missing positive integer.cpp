//constant space and tc = n
//set approach doesn't satisfy constant space condn
int Solution::firstMissingPositive(vector<int> &A) 
{
   int c;
    for (int i = 0; i < A.size(); ++i) {
        c = i;
        while (c >= 0 && c < A.size() && A[c] != c + 1 && A[c] >= 1 &&
               A[c] < A.size() + 1 && A[c] != A[A[c] - 1]) {
            swap(A[c], A[A[c] - 1]);
        }
    }
    int j;
    for (j = 0; j < A.size() && A[j] == j+1; ++j);
    if (j >= A.size())
     return A.size() + 1;
    else 
     return j+1;
}
