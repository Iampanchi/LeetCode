class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> v(nums.size(),vector<int> (2));
        for(int i = 0 ;i<nums.size();i++){
            v[i][0]=nums[i];
            v[i][1]=i;
        }
        sort(v.begin(),v.end());
        int i=0,j=v.size()-1;
        long long sum=1e18;
        while(sum!=target){
            sum=v[i][0]+v[j][0];
            if(sum>target){
                j--;
            }
            else if(sum<target){
                i++;
            }
            else{
                return{v[i][1],v[j][1]};
            }
        }
        return{v[i][1],v[j][1]};
    }
};