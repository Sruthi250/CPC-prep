#include<iostream>
using namespace std;

void findmedian( int A[], int B[], int m, int n)
{   //cout<<"Entered the fn\n";
	int k=0, i=0, j=0, C[20];
	float median =0;
	while(i <m && j<n)
	{
		if(A[i] <= B[j])
		{
		 C[k]= A[i];
		  k++;
		  i++;
		}	
		else
		{
		 C[k] = B[j];
		 k++;
		 j++;
		}
	}
	while(i<m)
	{
	 C[k]= A[i];
 	  k++;
	  i++;
	}	
	while(j<n)
	{
	 C[k] = B[j];
 	 k++;
 	 j++;
	}
	//cout<<"Median =";
	//even case
	 if((m+n)%2 == 0)
        median = (C[(m+n-1)/2] + C[(m + n)/2])/2.0;
    //odd case
    else
        median = C[(m+n)/2];
    cout<<median;
}

int main()
{
	int m, n, i=0;
	cin>>m>>n;
	int A[m], B[n];
	for( i =0; i<m ;i++)
		cin>>A[i];
	for( i =0; i<n ; i++)
		cin>>B[i];
	findmedian(A, B, m, n);
	return 0;
}
