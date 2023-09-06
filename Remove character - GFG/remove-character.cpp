//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
      
      string temp="";
      
      unordered_set<char> s;
      
      for(auto it : string2)
      {
          s.insert(it);
      }
      
      
      for(auto it : string1)
      {
          if(s.find(it)==s.end())
          {
              temp+=it;
          }
      }
      
      
      return temp;
      
      
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends