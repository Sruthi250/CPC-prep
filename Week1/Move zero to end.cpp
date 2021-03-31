#include <iostream>
using namespace std;
int n;
void zeroend(int a[])
{
   int count;
   for(int i = 0; i<n; i++)
   {
       if(a[i]!=0)
       {
           a[count] = a[i];
           count++;
       }
      
   }
   while (count < n)
    a[count++] = 0;
   
}
 void printarray(int a[])
 {
     for(int i =0; i< n;i++)
     {
         cout<<a[i]<<"  ";
     }
 }

int main() {
	int a[20];
	cin>>n;
	for(int i=0;i<n;i++)
        cin>>a[i];
        
    zeroend(a);
    printarray(a);
}
