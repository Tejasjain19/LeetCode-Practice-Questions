class Solution {
public:
   
    static bool cmp(pair<char,int>& a, pair<char, int>& b)
{
    return a.second > b.second;
}
    
    string frequencySort(string s) 
    {
        
       map<char,int> mp;
        string ans="";
        
        for(auto it : s)
        {
            mp[it]++;
        }
        
        
      	vector<pair<char, int>> vec;

	
  for (auto it : mp) 
  {
    vec.push_back(make_pair(it.first, it.second));
  }

  sort(vec.begin(), vec.end(), cmp); 
        
	for (int i = 0; i < vec.size(); i++)
	{   while(vec[i].second!=0)
    {
		ans+=vec[i].first;
        vec[i].second--;
    }
	}
     //  reverse(ans.begin(),ans.end());
        
        return ans;
        
        
        
    }
};