class Solution {
public:
    bool isPowerOfTwo(long long int x) 
    {
    
       return x && (!(x&(x-1)));
        
        
        
    }
};