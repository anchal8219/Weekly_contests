class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1,v2;
        for(int i=0;i<n;i++){
            if(i==0){
                v1.push_back(nums[i]);
                continue;
            }
            else if(i==1){
                v2.push_back(nums[i]);
                continue;
            }
            else{
                if(v1.back()>v2.back())
                v1.push_back(nums[i]);
                else
                v2.push_back(nums[i]);
            }
            
        }
        vector<int> res;
        for(int i=0;i<v1.size();i++)
        res.push_back(v1[i]);

        for(int i=0;i<v2.size();i++)
        res.push_back(v2[i]);

        return res;
    }
};