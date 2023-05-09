class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        //here concatinate a with a until a.length()>=a & check if b is substring or not if yes return cnt we repeated a else add a one more time because b[0] is present in a in 0...n-1 index range, if b[0] is present at a[n-1] there is chance of getting b with adding one more time
        string org=a;
        while(a.length()<b.length()){
            a+=org;
        }
        if(a.find(b)!=string::npos)
            return a.length()/org.length();
        a+=org;
        if(a.find(b)!=string::npos)
            return a.length()/org.length();
        return -1;    
        
    }
};