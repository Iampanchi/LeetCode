class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int n=height.size();
        vector<int> left(n+2,0),right(n+2,0);
        left[0]=0;
        right[n-1]=0;
        for(int i = 0 ; i <n;i++){
            left[i+1]=max(left[i],height[i]);
        }
        for(int i = n-1 ; i >=1;i--){
            right[i-1]=max(right[i],height[i]);
        }
        int ans=0;
        for(int i = 0 ; i<n;i++){
            ans+=max(min(left[i],right[i])-height[i],0);
        }
        return ans;
    }
};