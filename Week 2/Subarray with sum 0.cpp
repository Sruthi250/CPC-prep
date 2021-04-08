#include<iostream>
#include<unordered_set>
using namespace std;

bool subarraysum0(int a[], int n)
{
	unordered_set<int> storesum;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (sum == 0 || storesum.find(sum) != storesum.end())
			return true;
        storesum.insert(sum);
	}
	return false;
}

int main()
{
	int array[20], n;
	cin>>n;
	for(int i =0;i<n; i++)
	cin>>array[i];
	if (subarraysum0(array, n))
		cout << "Found a subarray whose sum is 0";
	else
		cout << "No Such Sub Array Exists";
	return 0;
}
