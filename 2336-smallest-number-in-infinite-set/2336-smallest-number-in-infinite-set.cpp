class SmallestInfiniteSet {
public:
    set<int> x;
    SmallestInfiniteSet() 
    {
        for(int i=1; i<=1000; i++)
        {
            x.insert(i);
        }
        
        
        
    }
    
    int popSmallest() 
    {
        
        int temp=*x.begin();
        
        x.erase(x.begin());
        
        return temp;
    }
    
    void addBack(int num) 
    {
        x.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */