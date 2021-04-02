class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n = v.size();
        for( int i = 0;i<n;i++)
        {   
           int x = abs(v[i]);
            if(v[x] < 0)
                return abs(x);
            v[x] = -v[x];
            
            
        }
        return 0;
    }
};
