#include <iostream>
#include<unordered_set>
using namespace std;

bool find3No(int a[], int size, int sum)
{
	for (int i = 0; i < size-2; i++)
	{
		unordered_set<int> s;
		int sum1 = sum - a[i];
		for (int j = i+1; j<size; j++)
		{//set find returns the pos if element is found else points to the end pos
		
			if (s.find(sum1 - a[j]) != s.end())
			{
				cout<<"Triplet: "<<a[i]<<","<<a[j]<<","<<sum1 - a[j];
				return true;
			}
			s.insert(a[j]);
		}
	}

	return false;
}

int main()
{
	int a[20], sum, n;
	cin>>n;
	for( int i =0; i<n;  i++)
	 cin>>a[i];
	cin>>sum;
    find3No(a, n , sum);
    return 0;
}
