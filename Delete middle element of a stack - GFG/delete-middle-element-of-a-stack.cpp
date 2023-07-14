//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
  
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
      
       stack<int> st;
       
       int count=0;
       
       
       while(count<sizeOfStack/2)
       {
           int x = s.top();
            s.pop();
           st.push(x);
            
           count++;
       }
           
         s.pop();
         
         while(!st.empty())
         {
             int x=st.top();
             s.push(x);
                st.pop();
         }
           
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends