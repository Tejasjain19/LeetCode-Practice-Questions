class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        code.insert(code.end(), code.begin(), code.end());
        vector<int> res(n, 0);
        
        if(k == 0)
            return res;
        else if(k > 0){
            int i = 0, j = 1, sum = 0;
            while(i < n){
                sum += code[j];
                if(j-i == k){
                    res[i] = sum;
                    i++;
                    sum -= code[i];
                }
                j++;
            }
        }
        else{
            k *= -1;
            int i = 2*n-1, j = 2*n-2, sum = 0;
            while(i >= n){
                sum += code[j];
                if(i-j == k){
                    res[i-n] = sum;
                    i--;
                    sum -= code[i];
                }
                j--;
            }
        }
        return res;
    }
};