#include <iostream>
using namespace std;
int punion(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (a1[i] < a2[j])
            cout << a1[i++] << " ";
  
        else if (a2[j] < a1[i])
            cout << a2[j++] << " ";
  
        else {
            cout << a2[j++] << " ";
            i++;
        }
    }cout<<"\n";
}
int pintersect(int a1[], int a2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) 
	{
		if (a1[i] < a2[j])
			i++;
		else if (a2[j] < a1[i])
			j++;
		else 
		{
			cout << a2[j] << " ";
			i++;
			j++;
		} 
	}cout<<"\n";
}

int main()
{
	int a1[20], a2[20], m,n;
	cin>>m>>n;
	for(int i =0; i<m; i++)
	cin>>a1[i];
	for( int j =0; j<n ; j++)
	cin>> a2[j];
  punion(a1,a2,m,n);
	pintersect(a1, a2, m, n);

	return 0;
}
