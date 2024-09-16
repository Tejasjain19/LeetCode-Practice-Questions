class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int size = timePoints.size();
        vector<vector<int>> timePts(size, vector<int>(1));
        
        for (int indx = 0; indx < size; indx++) {
            timePts[indx] = parseTime(timePoints[indx]);
        }
        
        sort(timePts.begin(), timePts.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] < b[1];
            } else {
                return a[0] < b[0];
            }
        });
        
        int minDiff = INT_MAX;
        for (int indx = 1; indx < size; indx++) {
            int currDiff = calculateDifference(timePts[indx-1], timePts[indx]);
            minDiff = min(currDiff, minDiff);
        }
        

        int wrapDiff = calculateDifference(timePts[size-1], {timePts[0][0] + 24, timePts[0][1]});
        minDiff = min(wrapDiff, minDiff);
        
        return minDiff;
    }
    
private:
    vector<int> parseTime(const string& Time) {
        vector<int> res(2);
        res[0] = stoi(Time.substr(0, 2));
        res[1] = stoi(Time.substr(3, 2));
        return res;
    }
    
    int calculateDifference(const vector<int>& prevTime, const vector<int>& currTime) {
        return (currTime[0] * 60 + currTime[1]) - (prevTime[0] * 60 + prevTime[1]);
    }
};