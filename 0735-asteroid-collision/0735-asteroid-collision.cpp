class Solution {
public:
  vector<int> asteroidCollision(vector<int>& asteroids) 
  {
	
      int n = asteroids.size();
      
      stack<int> s;
      
      
      for(int i=0; i<n; i++){
          
          if(s.empty() || asteroids[i]>0) {
              s.push(asteroids[i]);
          }
          
          else
          {
              while(!s.empty() && s.top()>0 &&  s.top()<abs(asteroids[i])) {
                  s.pop();
              }
              
          
          if( !s.empty() && s.top()==abs(asteroids[i]))
          {
              s.pop();
          }
          
          else
          {
              if(s.empty() || s.top()<0) {
              s.push(asteroids[i]);
                  
          }
              
          }
              
          }
          
      }
      vector<int> ans(s.size());
      
    for(int i = s.size()-1; i>=0 ; i--)
    {
        ans[i]=s.top();
        s.pop();
    }
      
      
      
   return ans;   
      
      
}
};