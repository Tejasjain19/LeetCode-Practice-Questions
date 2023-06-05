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
         
         for(int i=0; i<n-2; i++)
         {
             if(i==0 || (i>0 && nums[i-1]!=nums[i]))
             {
                 int l = i+1;
                 int h = n-1;
                 int val = X - nums[i];
                 
                 while(l<h)
                 {
                     
                     if(nums[l]+nums[h]==val)
                     {
                         vector<int> temp;
                         temp.push_back(nums[l]);
                         temp.push_back(nums[h]);
                         temp.push_back(nums[i]);
                         res.push_back(temp);
                         
                         while(l<h && nums[l]!=nums[l+1])
                         l++;
                         
                         while(l<h && nums[h]!=nums[h-1])
                        h--;
                         
                         
                     }
                     
                     if(nums[l]+nums[h]<val)
                     l++;
                     
                     else
                     h--;
                     
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