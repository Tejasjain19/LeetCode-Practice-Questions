class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
    
        int i=0,j=0,cnt=0,ans=INT_MIN;
        
        int n=answerKey.size();
        
        
        for( j=0; j<n; j++)
        {
            
            if(answerKey[j]=='F')
                cnt++;
            
            while(cnt>k)
            {
                
                if(answerKey[i]=='F')
                    cnt--;
                    
                i++;
                
                
            }
            
            ans=max(ans,j-i+1);
            
        }
        
        
        
        cnt=0,j=0,i=0;
        
            for(j=0; j<n; j++)
        {
            
            if(answerKey[j]=='T')
                cnt++;
            
            while(cnt>k)
            {
                
                if(answerKey[i]=='T')
                    cnt--;
                   
                i++;
                
                
            }
            
            ans=max(ans,j-i+1);
            
        }
        
        
        
        
        
        return ans;
        
        
        
        
    }
};