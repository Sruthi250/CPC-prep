#include<iostream>
using namespace std;

void print2numbers_oddocc(int a[], int size)
{
	int xor2 = a[0]; 
	int set_bit_no, i;
	int n = size - 2;
	int x = 0, y = 0;
	
	for(i = 1; i < size; i++)  //xor2 will store xor of all elements that gives xor of x and y
		xor2 = xor2 ^ a[i];

	set_bit_no = xor2 & ~(xor2-1);
	
	for(i = 0; i < size; i++)
	{
		if(a[i] & set_bit_no)
		x = x ^ a[i];
	
		else
		y = y ^ a[i];
	}

	cout<< x << "," << y;
}

int main()
{
	int a[20], size;
	cin>>size;
	for(int i =0; i< size; i++)
	cin>>a[i];
	print2numbers_oddocc(a,size);
	return 0;
}
