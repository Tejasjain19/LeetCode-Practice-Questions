//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
       
       
       long long sum=0;
       string ans="";
       
       
       for(int i=0; i<N; i++)
       {
          string temp = to_string(arr[i]);
          ans+=temp;
       }
       
       
       
       for(int i=0; i<ans.size(); i++)
       {
           
           int f = int(ans[i]);
           
           sum+=f;
           
           
       }
      
       
       
       
       if(sum%3==0)
       return 1;
       
       
       
       
       return 0;
       
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends