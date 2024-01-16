class RandomizedSet 
 {
public:
    vector<int> nums; 
    unordered_map<int, int> mp; 
    RandomizedSet() 
    {
        
    }
    
    bool insert(int val) 
    {
        if(mp.find(val) != mp.end()) 
            return false; 
        nums.push_back(val); 
        mp[val] = nums.size()-1; 
        return true;
    }
    
    bool remove(int val) 
    {
        if(mp.find(val) == mp.end()) 
            return false; 
        auto it = mp.find(val); 
        
       
        nums[it->second] = nums.back();
        nums.pop_back();
        
       
        mp[nums[it->second]] = it->second; 
        mp.erase(val);
        return true;
    }
    
    int getRandom() 
    {
        
        return nums[rand()%nums.size()];
    }
};