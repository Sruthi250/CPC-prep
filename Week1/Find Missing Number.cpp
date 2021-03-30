#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n =1, sum =0, temp;
    vector<int> v; //Vector is used as the size of the array is not given as input
   int x;
   while(cin>>x){
      v.push_back(x);
      sum = sum + x;
      n++;
   }
    temp = (n*(n+1))/2;
    cout<<(temp - sum);
}
