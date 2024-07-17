class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        // store the minimum value while traversing
        int mn = INT_MAX;
        // for default the answer is -1, incase of descending order
        int ans = -1;
        for(int i : nums)
        {
            // if we find any element lesser than mn, change mn
            if(mn > i)
            {
                mn = i;
            }
            // if the element is greater, make sure ith and jth index arent same
            else
            {
                if(mn != i)
                ans = max(ans, i-mn);
            }
        }
        return ans;
        
    }
};