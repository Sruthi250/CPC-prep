//similar logic to odd occurrences with diff input
#include<iostream>
using namespace std;

void get2NonRepeatingelements(int a[], int size)
{
	int Xor = a[0];
	int set_bit_no, i, x = 0, y = 0;
	for(i = 1; i < size; i++)
	Xor = Xor ^ a[i];
	set_bit_no = Xor & ~(Xor-1);
	
	for(i = 0; i < size; i++)
	{

	if(a[i] & set_bit_no)
		x = x ^ a[i];
	
	else
	{
		y = y ^ a[i];
	}
	} cout<<x<<","<<y;
}

int main()
{
	int a[20], size;
	cin>>size;
	for( int i =0; i<size; i++)
	cin>>a[i];
	get2NonRepeatingelements(a, size);
  return 0;
}

