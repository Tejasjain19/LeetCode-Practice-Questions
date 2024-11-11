class Solution {
public:
    vector<int> Sieveoferathones(int n) 
    {
    vector<bool> pme(n + 1, true);
    int pm = 2;
    while (pm * pm <= n) 
    {
        if (pme[pm]) 
        {
            for (int i = pm * pm; i <= n; i += pm) 
            {
                pme[i] = false;
            }
        }
        pm++;
    }

    vector<int> primenos;
    for (int pm = 2; pm <= n; pm++) {
        if (pme[pm]) {
            primenos.push_back(pm);
        }
    }

    return primenos;
}

    
    
    bool primeSubOperation(vector<int>& nums)
    { 
        
        int n=nums.size();
        
        
        if(n==1 && nums[0]==1)
            return true;
        
        set<int>s;
        
        for(auto it : nums)
        {
            s.insert(it);
        }
        
        if(n>=2 && s.size()==1)
        {
            return false;
        }
        
        
        
    vector<int> primes ;
        
        
   primes = Sieveoferathones(*max_element(nums.begin(), nums.end()));
        
        
        
    for (int i = 0; i < nums.size(); i++) 
    {
        if(i == 0)
        {
            int t = lower_bound(primes.begin(), primes.end(), nums[i]) - primes.begin();
            t--;
            if (t==-1)
            {
                continue;
            }
            nums[i]= nums[i]-primes[t];
        } 
        else 
        {
            int t = lower_bound(primes.begin(), primes.end(), nums[i] - nums[i - 1]) - primes.begin();
            t--;
            if (t== -1 || t==primes.size()) 
            {
                continue;
            }
            nums[i]=nums[i]-primes[t];
        }
    }
        
         bool temp;

  temp =is_sorted(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1]>= nums[i]) {
            return false;
        }
    }

    return true;

    }
};