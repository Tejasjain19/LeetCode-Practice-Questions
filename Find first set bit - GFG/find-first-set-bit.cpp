//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
   
   
   
   
   
   
   
    unsigned int getFirstSetBit(int n)
    {
        int pos=1;
        
        while(n>=1)
        {
            if(n&1)
            return pos;
        
        
            n=n/2;
            pos++;
        }
        
        
        return 0;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends