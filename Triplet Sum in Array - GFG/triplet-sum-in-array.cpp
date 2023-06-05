//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int nums[], int n, int X)
    {
        sort(nums,nums+n);
        
          vector<vector<int>> res;
        
    
        
        for(int i=0; i<n-2 ; i++)  // move for a
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low = i+1;
                int high = n-1;
                int sum = X-nums[i];
                
                while(low<high)
                {
                    if(nums[low]+nums[high]==sum)
                    {
                        vector<int> temp;
                      
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                          temp.push_back(nums[i]);
                        res.push_back(temp);
                        
                        while(low<high && nums[low]==nums[low+1])
                            low++;
                        
                            while(low<high && nums[high]==nums[high-1])
                           high--;
                        
                        low++;
                        high--;
                    }
                    
                    
                   else if(nums[low] + nums[high] < sum)
                    low++;
                    else
                    high--;
                }
                
            }
  
            
        }
        
       if(res.size()==0)
       return 0;
       
       return 1;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends