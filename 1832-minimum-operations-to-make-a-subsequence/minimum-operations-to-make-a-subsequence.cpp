class Solution {
public:
    int minOperations(vector<int>& target, vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int i = 0; i < target.size(); i++){
        mp[target[i]] = i;
    }
    vector<int> nums;
    for (int i = 0; i < arr.size(); i++){   
        if(mp.find(arr[i])!=mp.end()){
        nums.push_back(mp[arr[i]]);
        }
    }
    if(nums.empty())return target.size();
    vector<int> tails;
    tails.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        if (tails.back() < nums[i])
        {
            tails.push_back(nums[i]);
        }
        else
        {
            auto it = lower_bound(tails.begin(), tails.end(), nums[i]);
            *it = nums[i];
        }
    }
    return target.size()-tails.size();
    }
};