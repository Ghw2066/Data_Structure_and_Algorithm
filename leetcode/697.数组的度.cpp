class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<int> left(50000,-1);
        int right[50000]={0};
        int count[50000]={0};
        int max_d=0;
        for(int i=0;i<nums.size();i++){
            if(left[nums[i]]==-1){
                left[nums[i]]=i;
                //cout<<nums[i]<<" "<<left[nums[i]]<<endl;
            }

            right[nums[i]]=i;
            count[nums[i]]++;
            max_d=max(max_d,count[nums[i]]);
        }
       //cout<<max_d<<endl;
        int ans = nums.size();

        count[]

        for(int j=0; j<50000; j++){
            if(max_d==count[j]){
                //cout<<count[j]<<" "<<left[j]<<" "<<right[j]<<endl;
                ans = min(right[j]-left[j]+1, ans);
            }

        }
        return ans;

    }
};
// 执行用时：
// 80 ms, 在所有 C++ 提交中击败了90.09%的用户
// 内存消耗：
// 45.1 MB, 在所有 C++ 提交中击败了5.88%的用户

