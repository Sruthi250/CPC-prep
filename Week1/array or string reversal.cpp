#include <iostream>
using namespace std;

void revarray(int a[], int beg, int end)
{
	if (beg >= end)
	return;
	
	int temp = a[beg];
	a[beg] = a[end];
	a[end] = temp;
	
    revarray(a, beg + 1, end - 1); //recursive call
}	

void printarray(int a[], int size)
{
    for (int i=0; i<size; i++)
        cout<<a[i]<<" ";
    cout << endl;
}

int main()
{
	int a[20],n;
	cin>>n;
	for( int i =0; i<n; i++)
	cin>>a[i];
	revarray(a, 0, n-1);
	printarray(a,n);
	return 0;
}
