#include <iostream>
#include<vector>
#define R 5
#define C 4
using namespace std;
void diagonalOrderprint(int arr[][C], int n, int m)
{
   
    vector<vector<int> > res(n + m - 1);
 
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            res[i + j].push_back(arr[j][i]);
        }
    }
 
    for (int i=0; i<res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout<<res[i][j]<< " ";
 
        cout<<endl;
    }
}
