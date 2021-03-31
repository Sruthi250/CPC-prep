#include <iostream>
using namespace std;
int n;

void sepevenodd( int a[])
{
  int i=0, j= n-1;
  while(j>=i)
 {   
    if(a[i]%2!=0)
    {
        if(a[j]%2==0)
        { swap(a[i],a[j]);
          i++; j--;}
        else
         j--; 
   }
   else
   i++;
 }
}
int main()
{

  int a[20];
  cin>>n;
  for(int i =0; i<n; i++)
    cin>>a[i];
  sepevenodd(a);
  for(int i =0; i<n; i++)
    cout<<a[i]<<"  ";
}
