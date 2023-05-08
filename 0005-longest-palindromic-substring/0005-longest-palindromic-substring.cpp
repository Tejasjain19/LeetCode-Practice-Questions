class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, end = 0;
        for(int i = 0; i < s.length(); i++){
            int odd = expand(s,i,i);
            int even = expand(s,i,i+1);
            int len = max(odd, even);
            if(len > end-start){
                //Even len (6)-> 2 start --> i-2, end -> i+3
                //Odd len (5) -> 2 start i-2, end -> i+2
                start = i - (len-1)/2;
                end = i+ len/2;
            }
        }
        return s.substr(start, end-start+1);
    }
    int expand(string s, int left, int right){
        while(left >= 0 && right <s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
};