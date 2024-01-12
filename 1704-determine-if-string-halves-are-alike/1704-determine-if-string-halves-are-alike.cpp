class Solution {
public:
    
    
    bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
}
 
// Returns count of vowels in str
int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (isVowel(str[i])) // Check for vowel
            ++count;
    return count;
}
    
    

    
    bool halvesAreAlike(string s) 
    {
      int n = s.size();
        
      string temp1="";  
      
      string temp2="";
        
      for(int i=0; i<n/2; i++)
      {
          temp1+=s[i];
      }
      
        
        for(int i=n/2; i<n; i++)
      {
          temp2+=s[i];
      } 
        
        
        
     int a = countVowels(temp1);   
      int b = countVowels(temp2);      
        
      if(a==b)
          return true;
        
        return false;
        
        
        
        
        
        
        
        
        
        
        
    }
};