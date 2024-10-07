class Solution {
public:
    
   int calc(string S)
{
       
      int N = S.size();
    int M = 2;    
       
       
    string temp;
 
  
    int s = 0;
 

    for (int i = 0; i < N; ++i) {
 
        temp.push_back(S[i]);
 
  
        if (temp.size() >= M) {
 
            if (temp.substr(temp.size() - M, M) == "AB" || temp.substr(temp.size() - M, M) == "CD"  ) {
 
                s += M;
 
                int cnt = 0;
                while (cnt != M) {
                    temp.pop_back();
                    ++cnt;
                }
            }
        }
    }
 
    int ans = N-s;
   return ans;
}
    
    
    int minLength(string s) 
    {
        
    if(s.size()==1)
        return 1;
        
        
   int temp = calc(s);
        
     return temp;   
    }
};