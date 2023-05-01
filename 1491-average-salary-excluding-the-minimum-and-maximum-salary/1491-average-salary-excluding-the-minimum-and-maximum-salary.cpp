class Solution {
public:
    double average(vector<int>& salary)
    {
        double sum=0;
        int min=*min_element(salary.begin(),salary.end());
        int max=*max_element(salary.begin(),salary.end());     
        int n=salary.size();
        for(int i=0;i<n;i++){
            sum+=salary[i];
        }   
        sum-=min;
        sum-=max;
        return sum/(n-2);
    }
};