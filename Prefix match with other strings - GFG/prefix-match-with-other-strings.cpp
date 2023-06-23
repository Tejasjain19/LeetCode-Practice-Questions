//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
   int klengthpref(string arr[], int n, int k, string str){  
        if(k>str.size()){
            return 0;
        }
        string s1 = str.substr(0,k);
        int count = 0;
        for(int i = 0;i<n;i++){
            string s2 = arr[i].substr(0,k);
            if(s2==s1){
                count++;
            }
        }
        return count;
   }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends