class Solution {
public:
    long long minEnd(int n, int x) {
      n--;
      swap(n,x);
      long long nn = n;
      long long xx = x;
      
      vector<int> v,tt;
      while(xx)
      {
        v.push_back(xx&1);
        xx>>=1;
      }
      
      while(nn)
      {
        tt.push_back(nn&1);
        nn>>=1;
      }
     
      
      int i = 0 , j = 0 ;
      
      while(i<v.size() && j < tt.size()){
        
        if(tt[j]==1)
        {
          j++;
        }
        else
        {
          tt[j] = v[i];
          j++;
          i++;
        }
      }
      
      while(i<v.size())
      {
        tt.push_back(v[i]);
        i++;
      }
      
     
      long long ans = 0;
      for(int i = 0 ; i < tt.size() ; ++i)
        if(tt[i]==1)
          ans |= (1ll<<i);
      
      return ans;
      
    }
};