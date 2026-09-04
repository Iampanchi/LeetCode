class Solution {
public:
    #define ff first
    #define ss second
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<pair<int,int>> q;
        int n=nums.size();
        for(int i = 0 ; i < k-1;i++){
            while(!q.empty() && q.front().ff<=nums[i]){
                q.pop_front();
            }
            while(!q.empty() && q.back().ff<=nums[i]){
                q.pop_back();
            }
            q.push_back({nums[i],i});
        }

        vector<int> ans;
        for(int i = k-1;i<n;i++){
            
            while(!q.empty() &&( q.front().ff<=nums[i] || i-q.front().ss+1>k)){
                q.pop_front();
            }
            while(!q.empty() && (q.back().ff<=nums[i] || i-q.back().ss+1>k)){
                q.pop_back();
            }
            q.push_back({nums[i],i});
            ans.push_back(q.front().ff);
        }
        return ans;
    }
};