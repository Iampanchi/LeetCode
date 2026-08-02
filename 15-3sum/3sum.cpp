class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;

        for(int i = 0 ;i<nums.size()-2;i++){
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            int sum=-1;
            int j=i+1,k=nums.size()-1;
            long long lstj=1e8,lstk=1e8;
            while(sum!=0 && j<k){
                if(nums[j]==lstj && nums[k]==lstk){
                    j++;
                    k--;
                    continue;

                }
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                 v.push_back({nums[i],nums[j],nums[k]});
                 lstj=nums[j];
                 lstk=nums[k];
                 j++;
                 k--;
                 
                 
                 sum=-1;
                }
            }
            
            
        }
        
        return v;
    }
};