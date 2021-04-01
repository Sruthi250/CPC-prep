class Solution {
public:
bool isPalindrome(int x) 
{
    if(x<0) 
    return false;
    string str = to_string(x); //int to string
    int n = str.length();
    for(int i=0; i < n; ++i)
    {
        if(str[i] != str[n-1-i]) 
            return false;
    }
    return true;
}
};
