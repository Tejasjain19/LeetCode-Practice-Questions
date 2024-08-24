class Solution {
public:
    string nearestPalindromic(string n) {
        string a = n;
        int l = n.length() - 1;
        for(int i =0; i<= l / 2; i++){
            a[l - i] = a[i]; 
        }
        string b = a, c= a;
        
        int i = l/2;
        while(i >= 0){
            if(b[i] > '0'){
                b[i]--;
                if(i != l-i)
                b[l - i]--;
                break;
            }
            b[i] = '9';
            if(i != l - i)
            b[l - i] = '9';
            i--;
        }
        if(b[0] == '0' && l > 0){
            b = "";
            for(int j =0; j< l; j++)
            b += '9';
        }
        i = l/2;
        while(i >= 0){
            if(c[i] < '9'){
                c[i]++;
                if(i != l-i)
                c[l - i]++;
                break;
            }
            c[i] = '0';
            if(i != l - i)
            c[l - i] = '0';
            i--;
        }
        if(i == -1){
            c = '1';
            for(int j = 0; j < l; j++){
                c += '0';
            }
            c += '1';
        }
        long long d1 = 0, d2 = 0, d3 = 0;
        for(int i = 0; i<= l ; i++){
            d1 = d1 * 10 + (n[i] - a[i]);
            if(b.length() == l + 1)
            d2 = d2 * 10 + (n[i] - b[i]);
            else if(i > 0){
                d2 = d2 * 10 + (n[i] - '0');
            }
            if(c.length() == l+1)
            d3 = d3 * 10 + (n[i] - c[i]);
            else{
                d3 = d3 * 10 + ('9' - n[i]);
            }
        }
        if(b.length() != l+ 1)
        d2 += 1;
        if(c.length() != l + 1)
        d3  += 2;
        d1 = abs(d1);
        d2 = abs(d2);
        d3 = abs(d3);
        if(d1 == 0)
        d1 = d2;
        
        if(d1 < d2 && d1 < d3){
            return a;
        }
        if(d2 < d1 && d2 < d3)
        return b;
        if(d3 < d1 && d3 < d2)
        return c;
        if(d1 == d2){
            return b;
        }
        if(d2 == d3){
            return b;
        }
        return a;
    }
};