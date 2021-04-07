#include <iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

bool comp(int x, int y)
{
	return abs(x) < abs(y);
}

void findMinSum(int a[], int n)
{
	sort(a, a+n, comp);
	int min = INT_MAX, x, y;
	for (int i=1; i < n; i++) 
	{
	    
		if (abs(a[i-1] + a[i]) <= min) 
		{
		   
			min = abs(a[i-1] + a[i]);
			x = i-1;
			y = i;
		}
	}
	cout << "Elements whose sum is minimum: "<<a[x]<<","<<a[y];
}

int main()
{
	int a[20], n;
    cin>>n;
    for(int i =0; i<n; i++)
     cin>>a[i];
	findMinSum(a, n);
	return 0;
}
