vector<int>v;
long long int  sum = 0,sq = 0, SUM = 0, SQ = 0; //long long is used for limits
long long int n= A.size();
sum = (long long int)(n*(n+1))/2; //sum of 1 to n
sq = (long long int)(n*(n+1)*(2*n+1))/6; //square of 1 to n

for(long long int i = 0;i<n;i++)
{
    long long int t = (long long int)A[i];
    SUM += t;
    SQ  += t*t;
    
}
long long int x = sum - SUM;
long long int y = (sq - SQ)/x;

long long int a = abs((x+y)/2);
long long int b = abs((x-y)/2);

if(sum > SUM)
{
    int A = (int)min(a,b);
    int B = (int)max(a,b);
    v.push_back(A);
    v.push_back(B);
}
else
{
    int A = (int)max(a,b);
    int B = (int)min(a,b);
    v.push_back(A);
    v.push_back(B);
}

return v;
}
