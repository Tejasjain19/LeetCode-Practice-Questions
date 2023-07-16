//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        
        vector<int> v;
        
        
        
        queue<int> temp;
        
        while(!q.empty())
        {
            
            v.push_back(q.front());
            q.pop();
            
        }
        
        reverse(v.begin(),v.end());
        
        for(auto it : v)
        {
            temp.push(it);
        } 
        
        return temp;
    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends