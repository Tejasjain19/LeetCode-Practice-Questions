class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        long long sum = 0, i = 0;

        for (auto i : chalk) sum += i;

      // first of all count the sum 

        k %= sum;

        if (k == 0) return 0;

    // if k == 0 means the sum is equal to k return 0 
     // becouse  first student have 0 chalk 
       
      else if (k < sum )
        
            while (chalk[i] <= k)
             
               k = k - chalk[i++];
        
        return i;
    }
};