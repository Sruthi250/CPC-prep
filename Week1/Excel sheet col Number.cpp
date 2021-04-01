#include <iostream>
using namespace std;
void  convertit(string col) 
{
        long int col_number = 0;
        for (auto i = 0; i < col.size() ; i++)
        {
           col_number =  col_number * 26 + col[i] -'A' + 1;
            
        }
        cout<< col_number;
}
int main()
{
    string col;
    cin>>col;
    convertit(col);
    return 0;
}
