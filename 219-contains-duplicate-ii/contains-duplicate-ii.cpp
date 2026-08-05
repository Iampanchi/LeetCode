// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int i =0;
//         unordered_map<int,vector<int>> mp;
//         for(int i = 0 ;i<nums.size();i++){
//             mp[nums[i]].push_back(i);
//         }
//         for(auto it = mp.begin();it!=mp.end();it++){
//             int lst = it->second[0];
//             int cur = it->second[0];
//             for(int i=1;i<it->second.size();i++){
//                 cur=it->second[i];
//                 if(cur-lst<=k){
//                     return true;
//                 }
//                 lst=cur;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp,fnd;
        for(int i = 0 ;i<nums.size();i++){
            if(!fnd[nums[i]]){
                fnd[nums[i]]=1;
                
            }
            else{
                if(i-mp[nums[i]]<=k){
                    return true;
                }
            }
            mp[nums[i]]=i;
        }
        return false;
        
    }
};