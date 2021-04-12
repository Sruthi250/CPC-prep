#include<iostream>
#include<climits>
using namespace std;

int LargestSumsubarray(int a[], int n)
{
	int max_so_far = INT_MIN, max_as_of_now = 0,
	start =0, end = 0, s=0;

	for (int i=0; i<n; i++ )
	{
		max_as_of_now += a[i];

		if (max_so_far < max_as_of_now)
		{
			max_so_far =  max_as_of_now;
			start = s;
			end = i;
		}

		if ( max_as_of_now < 0)
		{
		    max_as_of_now = 0;
			s = i+1;
		}
	}
	cout << "Maximum contiguous sum: "<< max_so_far << endl;
	cout << "Starts at: "<< start << endl << "Ends at: "<< end << endl;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for( int i =0; i<n; i++)
	cin>>a[i];
	int max_sum = LargestSumsubarray(a, n);
	return 0;
}
