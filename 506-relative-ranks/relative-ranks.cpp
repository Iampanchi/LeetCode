class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i = 1; i<=score.size();i++){
            pq.push({score[i-1],i});
        }
        vector<string> ans(score.size());
        if(pq.size()>=1){
            ans[pq.top().second-1]="Gold Medal";
            pq.pop();
                    }
        if(pq.size()>=1){
            ans[pq.top().second-1]="Silver Medal";
            pq.pop();
        }
        if(pq.size()>=1){
            ans[pq.top().second-1]="Bronze Medal";
            pq.pop();
        }

        for(int i = 3;i<score.size();i++){
            ans[pq.top().second-1]=to_string(i+1);
            pq.pop();
        }
        return ans;

    }
};