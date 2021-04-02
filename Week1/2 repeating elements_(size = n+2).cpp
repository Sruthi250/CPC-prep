#include <iostream>
#include<math.h>
using namespace std;

int fact(int n);
void printRepeat(int a[], int size)
{
	int sum = 0, prod = 1; 
	int x, y, D;
	int n = size - 2, i;
	
	for(i = 0; i < size; i++)
	{
		sum = sum + a[i];
		prod = prod*a[i];
	}	
		
	sum = sum - n*(n+1)/2;  //sum = x+y
	prod = prod/fact(n); //(x*y * n!)/n! = x*y
		
	D = sqrt((sum*sum) - (4*prod));
		
	x = (D + sum)/2;
	y = (sum - D)/2;
		
	cout<<x<<" "<<y;
}

int fact(int n)
{
	return (n == 0)? 1 : n*fact(n-1);
}

int main()
{
	int a[20], size;
	cin>>size;
	for(int i =0; i<size; i++)
	cin>>a[i];
	printRepeat(a, size);
	return 0;
}
