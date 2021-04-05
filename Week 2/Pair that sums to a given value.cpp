#include <iostream>
#include<unordered_set>
using namespace std;

void findpair(int a[], int size, int sum)
{   unordered_set<int> s;
	for (int i = 0; i < size-1; i++)
	{
		int temp = sum - a[i];
		
			if (s.find(temp) != s.end())
			{
				cout<<"Pair: "<<a[i]<<","<<temp<<"\n";
				
			}
			s.insert(a[i]);
		
	}

}

int main()
{
	int a[20], sum, n;
	cin>>n;
	for( int i =0; i<n;  i++)
	 cin>>a[i];
	cin>>sum;
  findpair(a, n , sum);
  return 0;
}
