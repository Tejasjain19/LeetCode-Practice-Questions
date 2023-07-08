//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int nums[], int n)
    { 
         sort(nums,nums+n);
        
        vector<vector<int>> res;
        
        
        for(int i=0; i<n-2 ; i++)  // move for a
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low = i+1;
                int high = n-1;
                int sum = 0-nums[i];
                
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
        if(res.size()>0)
        return true;
        
        return false;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends