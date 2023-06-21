class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
    
   vector<int> ans;
        
   int n = s.size();
   int k=p.size();  // window size
        
   unordered_map<char,int> mp;
        
   for(auto it : p)
   {
       mp[it]++;
   }
        
   int i=0,j=0,count=mp.size();
        
   while(j<n)
   {
      
     mp[s[j]]--;
     
     if(mp[s[j]]==0)
         count--;
       
      if(j-i+1<k)
          j++;
       
       else if(j-i+1==k)
       {
           if(count==0)
           {
               ans.push_back(i);
           }
           
           if(mp.find(s[i])!=mp.end())
           {
               mp[s[i]]++;
           }
           
           if(mp[s[i]]==1)
               count++;
           
           i++;
           
           j++;
           
       }       
       
       
       
   }
        
        return ans;
        
        
    }
};