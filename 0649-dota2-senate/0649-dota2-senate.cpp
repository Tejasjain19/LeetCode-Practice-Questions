class Solution {
public:
    string solve(string senate) {
        queue<int> qr, qd;
        int n = senate.length();

        for(int i = 0; i<n; i++)
            (senate[i] == 'R')?qr.push(i):qd.push(i);

        while(!qr.empty() && !qd.empty()){
            int r_id = qr.front(), d_id = qd.front();
            qr.pop(), qd.pop();
            if(r_id < d_id) qr.push(r_id + n);
            else qd.push(d_id + n);
        }
        
        return (qr.size() > qd.size())? "Radiant" : "Dire";
    }

    string predictPartyVictory(string senate) {
        return solve(senate);
    }
};