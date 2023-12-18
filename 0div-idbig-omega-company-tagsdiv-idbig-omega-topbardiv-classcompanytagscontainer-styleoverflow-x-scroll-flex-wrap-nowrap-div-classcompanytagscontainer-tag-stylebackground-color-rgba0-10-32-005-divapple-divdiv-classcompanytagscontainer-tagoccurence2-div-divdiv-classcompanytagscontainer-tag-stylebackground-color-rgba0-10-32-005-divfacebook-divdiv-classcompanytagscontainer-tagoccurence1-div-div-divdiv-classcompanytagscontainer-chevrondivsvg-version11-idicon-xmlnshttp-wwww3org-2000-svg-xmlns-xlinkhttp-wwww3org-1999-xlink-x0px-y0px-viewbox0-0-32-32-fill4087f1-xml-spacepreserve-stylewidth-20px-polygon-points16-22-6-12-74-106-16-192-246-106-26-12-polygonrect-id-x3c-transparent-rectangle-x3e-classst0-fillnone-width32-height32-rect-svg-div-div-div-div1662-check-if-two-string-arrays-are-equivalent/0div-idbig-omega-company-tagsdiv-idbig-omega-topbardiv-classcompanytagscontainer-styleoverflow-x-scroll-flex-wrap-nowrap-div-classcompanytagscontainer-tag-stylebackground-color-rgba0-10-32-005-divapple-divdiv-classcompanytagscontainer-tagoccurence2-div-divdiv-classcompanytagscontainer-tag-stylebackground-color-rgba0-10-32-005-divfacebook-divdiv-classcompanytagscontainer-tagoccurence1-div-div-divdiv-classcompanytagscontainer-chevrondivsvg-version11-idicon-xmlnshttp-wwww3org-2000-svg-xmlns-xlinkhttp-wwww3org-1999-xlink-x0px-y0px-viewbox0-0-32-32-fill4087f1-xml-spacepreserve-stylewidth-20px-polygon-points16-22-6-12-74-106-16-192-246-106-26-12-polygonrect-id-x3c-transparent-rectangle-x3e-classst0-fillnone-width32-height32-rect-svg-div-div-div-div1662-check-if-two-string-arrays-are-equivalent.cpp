class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sol1="";
        string sol2="";
        for(auto it:word1)
            sol1+=it;
        
        for(auto it:word2)
            sol2+=it;
        
        return sol1==sol2;
    }
};