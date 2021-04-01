#include <iostream>
using namespace std;
//Aternate pos and neg numbers
void swap( int *a, int *b)
{
    int temp = *a;
    *a= *b;
    *b = temp;
}
//quick sort with pivot 0
void rearrange( int a[], int N)
{
    int i =-1;
    for(int j =0;j<N;j++)
    {
        if(a[j]<0)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    
    int neg =0, pos = i+1;
    while((neg<pos) && (a[neg]<0) && (pos<N))//N - size
    {
        swap(&a[pos], &a[neg]);
        pos++;
        neg = neg +2;
    }
}

void printarray( int a[], int N)
{
    for( int i =0; i<N; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main() {
	int a[20], N;
	cin>>N;
	for(int i =0; i<N; i++)
	cin>>a[i];
	rearrange(a,N);
	printarray(a, N);
	
	return 0;
}
