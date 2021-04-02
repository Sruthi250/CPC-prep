#include<iostream>
using namespace std;
//XOR of all elements
int OddOccurringelement(int a[], int n)
{
	int r = 0;
	for (int i = 0; i < n; i++)	
		r = r ^ a[i];
	
	return r;
}

int main()
{
	int a[20], n;
	cin>>n;
	for( int i  =0; i<n; i++)
	cin>>a[i];
	cout << OddOccurringelement(a , n);
	
	return 0;
}
