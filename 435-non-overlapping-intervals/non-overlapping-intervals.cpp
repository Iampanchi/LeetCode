class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        for(vector<int> &a:intervals){
            swap(a[0],a[1]);
        }
        sort(intervals.begin(),intervals.end());
        int last=intervals[0][0];
        int cnt = 1;
        for(int i = 1 ;i<intervals.size();i++){
            if(intervals[i][1]>=last){
                last=intervals[i][0];
                cnt++;
            }
        }
        return intervals.size()-cnt;
    }
};