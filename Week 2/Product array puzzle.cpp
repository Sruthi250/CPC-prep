#include <iostream>
using namespace std;

long* productarraypuzzle(int a[], int n)
{
	long prod = 1, count = 0;

	for (int i = 0; i < n; i++) 
	{

		if (a[i] == 0)
			count++;
		else
			prod *= a[i];
	}

	long* arr = new long[n];

	for (int i = 0; i < n; i++) 
	  { //more than 1 zero in the array
		if (count > 1) {
			arr[i] = 0;
		}

		else if (count == 0)
			arr[i] = (prod / a[i]);

		else if (count == 1 && a[i] != 0) {
			arr[i] = 0;
		}

		else
			arr[i] = prod;
	}
	return arr;
}

int main()
{
	int n;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; i++)
	cin>>array[i];
	long* ans;
	ans = productarraypuzzle(array, n);

	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
