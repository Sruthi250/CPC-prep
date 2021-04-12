#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Fisher yates shuffle algo TC = O(n)
//Condn: equal probability = 1/n
void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printthearray (int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

void formrandomarray (int arr[], int n)
{
	srand (time(NULL));
	
	for (int i = n - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		swap(&arr[i], &arr[j]);
	}
}

int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i =0; i<n; i++)
	cin>>A[i];
	formrandomarray(A, n);
	printthearray(A, n);

	return 0;
}
