class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size(),h=0,ct=0;
        for(int i:nums){
            ct += i;

            if(ct==0)
            h++;
        }
        return h;
    }
    
};