#include <iostream>
using namespace std;
struct Pair
{
	int min;
	int max;
};

struct Pair MinMax(int a[], int n)
{
	struct Pair mm;	
	int i;
	
	if (n%2 == 0)
	{
		if (a[0] > a[1])	
		{
			mm.max = a[0];
			mm.min = a[1];
		}
		else
		{
			mm.min = a[0];
			mm.max = a[1];
		}
		
		i = 2;
	}
	
	else
	{
		mm.min = a[0];
		mm.max = a[0];
		
		i = 1;
	}
	
	while (i < n-1)
	{		
		if (a[i] > a[i+1])		
		{
			if(a[i] > mm.max)	
				mm.max = a[i];
				
			if(a[i+1] < mm.min)		
				mm.min = a[i + 1];	
		}
		else	
		{
			if (a[i+1] > mm.max)	
				mm.max = a[i+1];
				
			if (a[i] < mm.min)		
				mm.min = a[i];	
		}
	
		i += 2;
	}		
	return mm;
}

int main()
{
	int array[20], size;
    cin>>size;
    for(int i =0; i<size; i++)
    cin>>array[i];
	Pair mm = MinMax(array,size);
  cout << "Min element: "<< mm.min << endl;
	cout << "Max element: "<< mm.max;
	return 0;
}
