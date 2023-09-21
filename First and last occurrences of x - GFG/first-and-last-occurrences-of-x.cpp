//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        
     int cnt=0;
     
       vector<int> temp; 
     
     
     for(int i=0; i<n; i++)
     {
         if(arr[i]==x)
         temp.push_back(i);
     }
        
        
    int t = temp.size();
    
    if(t==0)
    return {-1,-1};
    
    if(t==1)
    return {temp[0],temp[0]};
    
    
    
    return {temp[0],temp[t-1]};    
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends