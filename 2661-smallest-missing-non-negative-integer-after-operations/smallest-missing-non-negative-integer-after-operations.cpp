class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int k) {
        // if(k==1)return nums.size();
        vector<int> v(k);
        int x = nums.size()+1,j;
        for(auto &i: nums){
            v[(i%k+k)%k]++;
        }
        for(int i = 0; i < k; i++){
            if(v[i]<x){
                x = v[i];
                j = i;
            }
        }
        return x*k+j;
    }
};