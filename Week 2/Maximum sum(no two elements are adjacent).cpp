#include<iostream>
using namespace std;
int FindMaxSum(int a[], int n)
{
int in = a[0], ex = 0, ex_new;
int i;
for (i=1; i<n; i++)
{
	ex_new = (in > ex)? in: ex;
	in = ex + a[i];
	ex = ex_new;
}

return ((in > ex)? in : ex);
}

int main()
{
int array[10], n;
cin>>n;
for(int i=0; i<n; i++)
cin>>array[i];
cout<<FindMaxSum(array, n);
return 0;
}
