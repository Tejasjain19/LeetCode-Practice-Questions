class Solution {
public:
    bool isCircularSentence(string sentence) 
    {
       char x;
      
       
        char y=sentence[0];
        int n=sentence.size(),temp=0;
        
        
        
        if(sentence.size()==1)
            return true;
        
        
        for(int i=1; i<n; i++)
        {
            if(y!=sentence[i] && i+1==n)
            {
                return false;
            }
        
        
        if(n-1==i && temp==0)
        {
            if(y!=sentence[i])
            {
                return false;
            }
        }
        
        if(sentence[i]==' ')
        {
            temp++;
            x=sentence[i-1];
        }
        
        if(x!=sentence[i] && sentence[i-1]==' ')
        {
            return false;
        }
        }
        
        return true;
    }
};