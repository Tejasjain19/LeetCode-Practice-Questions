class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        char letter = letters[0];
        
        for(auto it : letters)
        {
            if(it>target)
            {
                letter=it;
                break;
            }
        }
        
        
        return letter;
    }
};