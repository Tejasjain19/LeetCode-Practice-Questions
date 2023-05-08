class Solution {
public:
    int romanToInt(string s) 
    {
    
     map<char,int> roman;
     int num=0,sum=0,n=s.size(); 
        
     roman.insert(make_pair('I',1));   
      roman.insert(make_pair('V',5));     
     roman.insert(make_pair('X',10));    
    roman.insert(make_pair('L',50));  
    roman.insert(make_pair('C',100));  
    roman.insert(make_pair('D',500));  
    roman.insert(make_pair('M',1000));  
        
    for(int i=0; i<n; )
    {
        if(i==n-1 || roman[s[i]]>=roman[s[i+1]])  // left char greator than right
        {
            num=roman[s[i]];
            i++;
         }
        else
        {
            num = roman[s[i+1]] - roman[s[i]];
            i=i+2;
        }
        
        sum+=num;
          
    }
        
        return sum;
    }
       
};