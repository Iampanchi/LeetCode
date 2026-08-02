class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> v;
        // if(nums.size()>=3 && nums[0]==0 && nums[1]==0 && nums[2]==0){
        //     v.insert({0,0,0});
        // }
        for(int i = 0 ;i<nums.size()-2;i++){
            int sum=-1;
            int j=i+1,k=nums.size()-1;
            
            while(sum!=0 && j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                 v.insert({nums[i],nums[j],nums[k]});
                 j++;
                 k--;
                 sum=-1;
                }
            }
            if(sum==0 && j<k){
                 v.insert({nums[i],nums[j],nums[k]});
            }
            
        }
        vector<vector<int>> p(v.begin(),v.end());
        return p;
    }
};