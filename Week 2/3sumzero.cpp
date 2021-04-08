//interviewbit
vector<vector<int> > Solution::threeSum(vector<int> &A) {
    
        set<vector<int>> s;
        vector<vector<int>> r;
        vector<int> v;
        int n = A.size();
        sort(A.begin(),A.end());
        
        for(int i=0;i<n;i++){
            int num = A[i];
            int start = i+1;
            int end = n-1;
            
            while(start < end){
                int a = A[start];
                int b = A[end];
                
                if(a+b == -(num)){
                    v.clear();
                    v.push_back(num);
                    v.push_back(a);
                    v.push_back(b);
                    
                    s.insert(v);
                    start++;
                    end--;
                }
                
                else if(a+ b > -(num)){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        
        set<vector<int>>:: iterator it;
        
        for(it = s.begin(); it!= s.end(); it++){
            r.push_back(*it);
        }
        
        return r;
    }

