class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        
      int n=pref.size();
        
      
      vector<int> temp(n);
        
          if(n==1)
       {     vector<int> t;
           t.push_back(pref[0]);
              return t;
       }
        
        
        
       temp[0]=pref[0];
        
       for(int i=1; i<n; i++)
       {
           temp[i]=pref[i]^pref[i-1];
       }
        
        
        return temp;   
        
    }
};