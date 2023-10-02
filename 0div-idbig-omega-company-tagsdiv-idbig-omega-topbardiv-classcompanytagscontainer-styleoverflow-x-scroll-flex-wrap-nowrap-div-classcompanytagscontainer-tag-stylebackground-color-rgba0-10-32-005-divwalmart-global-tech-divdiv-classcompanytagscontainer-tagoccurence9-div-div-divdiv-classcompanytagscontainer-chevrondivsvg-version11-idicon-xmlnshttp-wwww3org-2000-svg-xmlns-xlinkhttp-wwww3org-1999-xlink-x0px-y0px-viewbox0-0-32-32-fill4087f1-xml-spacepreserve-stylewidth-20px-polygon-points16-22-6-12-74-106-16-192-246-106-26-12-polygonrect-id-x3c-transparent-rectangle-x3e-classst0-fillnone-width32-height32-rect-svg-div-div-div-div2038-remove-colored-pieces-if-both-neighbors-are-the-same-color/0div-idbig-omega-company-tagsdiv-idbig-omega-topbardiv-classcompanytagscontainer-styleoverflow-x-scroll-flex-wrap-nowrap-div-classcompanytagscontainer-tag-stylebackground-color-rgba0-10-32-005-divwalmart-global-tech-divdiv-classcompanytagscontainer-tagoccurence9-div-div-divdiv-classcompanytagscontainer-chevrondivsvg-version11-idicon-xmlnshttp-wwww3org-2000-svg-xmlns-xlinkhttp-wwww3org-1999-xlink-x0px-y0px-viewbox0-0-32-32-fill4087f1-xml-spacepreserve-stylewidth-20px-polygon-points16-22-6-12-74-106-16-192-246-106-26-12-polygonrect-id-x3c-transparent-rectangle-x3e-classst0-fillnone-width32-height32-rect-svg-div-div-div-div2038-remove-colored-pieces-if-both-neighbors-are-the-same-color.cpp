class Solution {
public:
    bool winnerOfGame(string colors) 
    {
    
        int n= colors.size(),cnta=0,cntb=0,alice=0,bob=0;
        
        bool flag=false;
        
        
 for (int i = 0; i < colors.size(); i++) 
  { 
   
    if (colors[i] == 'B') 
      cnta = 0; 
 
    else
    { 
      cnta++;
     if(cnta>=3)
     {
         alice++;
     }
    } 
  } 
     
        
        
          
 for (int i = 0; i < colors.size(); i++) 
  { 
   
    if (colors[i] == 'A') 
      cntb = 0; 
 
    else
    { 
      cntb++;
     if(cntb>=3)
     {
        bob++;
     }
    } 
  } 
           
        
   if(alice > bob)     
       return true;
        
        
        return false;
        
        
        
        
        
    }
};