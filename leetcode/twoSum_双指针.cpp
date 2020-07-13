class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> bak=nums;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        for(;i<j;){
            if(nums[i]+nums[j]<target){
                i++;
            }
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else
                break;
        }
        int locl,locr;
        bool flag=true;
        for(int k=0;k<bak.size();k++){
            if(nums[i]==bak[k]&&flag){
                locl=k;
                flag=false;
            }
            if(nums[j]==bak[k]){
                locr=k;
            }
        }
        vector<int> ans {locl,locr};
        return ans;

    }
};