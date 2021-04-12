#include <iostream>
#include<unordered_map>
using namespace std;

int maxLen(int arr[], int n)
{
	unordered_map<int, int> UM;

	int sum = 0, max_len = 0, end_index = -1;

	for (int i = 0; i < n; i++)
		arr[i] = (arr[i] == 0) ? -1 : 1;

	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
		
		if (sum == 0) 
		{
			max_len = i+1;
			end_index = i;
		}

		if (UM.find(sum) != UM.end()) 
		{
			if (max_len < i - UM[sum]) 
			{
				max_len = i - UM[sum];
				end_index = i;
			}
		}
		else 
			UM[sum] = i;
	}

	for (int i = 0; i < n; i++)
		arr[i] = (arr[i] == -1) ? 0 : 1;

	cout<<end_index - max_len + 1<<" to "<< end_index;
	
    return max_len;
}

int main()
{
	int n;
	cin>>n;
	int array[n];
	for( int i =0; i<n; i++)
    cin>>array[i];
  maxLen(array, n);
	return 0;
}
