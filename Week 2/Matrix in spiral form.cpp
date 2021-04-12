#include <iostream>
using namespace std;
const int N = 10;
void print(int arr[][N], int i, int j, int m, int n)
{
	if (i >= m or j >= n)
		return;

	for (int p = j; p < n; p++)
		cout << arr[i][p] << " ";

	for (int p = i + 1; p < m; p++)
		cout << arr[p][n - 1] << " ";

	if ((m - 1) != i)
		for (int p = n - 2; p >= j; p--)
			cout << arr[m - 1][p] << " ";

	if ((n - 1) != j)
		for (int p = m - 2; p > i; p--)
			cout << arr[p][j] << " ";

	print(arr, i + 1, j + 1, m - 1, n - 1);
}

int main()
{

	int a[10][10], m, n;
	cin>>m>>n;
	for(int i =0; i<m; i++)
	{
	    for( int j =0; j< n; j++)
	    cin>>a[i][j];
	}
	print(a, 0, 0, m, n);
	return 0;
}

