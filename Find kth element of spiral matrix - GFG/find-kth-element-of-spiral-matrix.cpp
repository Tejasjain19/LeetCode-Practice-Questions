//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
        int findK(int a[MAX][MAX],int n,int m,int k)
    {
         int total=n*m;   // total is the total size of the matrix
         
          int startrow=0;
          int endrow=n-1;   
          int startcol=0;
          int endcol=m-1;
          
          int cnt=0;
          vector<int>ans;
          while(cnt<total){
              for(int i=startcol; cnt<total && i<=endcol; i++){
                  ans.push_back(a[startrow][i]);
                  cnt++;
              }
              startrow++;
              
              for(int i=startrow; cnt<total && i<=endrow; i++){
                  ans.push_back(a[i][endcol]);
                  cnt++;
              }
              endcol--;
              
              for(int i=endcol; cnt<total && i>=startcol; i--){
                  ans.push_back(a[endrow][i]);
                  cnt++;
              }
              endrow--;
              
              for(int i=endrow; cnt<total && i>=startrow; i--){
                  ans.push_back(a[i][startcol]);
                  cnt++;
              }
              startcol++;
              
          }
          
          return ans[k-1];
          
    }

};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends