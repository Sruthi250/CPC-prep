#include <iostream>
using namespace std;

void find3Nos(int a[], int n)
{
	int max = n-1, min = 0, i;
    int* s = new int[n];
    s[0] = -1;
	for (i=1; i<n; i++)
	{
		if (a[i] <= a[min]) 
		{
			min = i;
			s[i] = -1;
		}
		else
			s[i] = min;
	}
	int* g = new int[n];

	g[n-1] = -1;
	for (i = n-2; i>=0; i--) 
	{
		if (a[i] >= a[max]) 
		{
			max = i;
			g[i] = -1;
		}
		else
			g[i] = max;
	}
  for (i=0; i<n; i++) 
	{
		if (s[i] != -1 && g[i] != -1) 
		{
			cout<<a[s[i]]<< ","<<a[i]<<","<<a[g[i]];
			return;
		}
	}

	cout<<"No triplet found";
  delete[] s;
	delete[] g;

	return;
}

int main()
{
	int array[20],n;
	cin>>n;
	for(int i =0; i<n; i++)
     cin>>array[i];
	find3Nos(array, n);
	return 0;
}


