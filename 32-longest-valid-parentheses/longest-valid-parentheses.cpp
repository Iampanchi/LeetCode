class Solution {
public:
    int longestValidParentheses(string s) {
        stack<pair<char,int>> st;
        vector<int> invalid;
        invalid.push_back(-1);
        int mx=0;
        for(int i = 0 ; i<s.size();i++){
            if(!st.empty() && st.top().first=='(' && s[i]==')'){
                st.pop();
            }
            else if(st.empty() && s[i]==')'){
                invalid.push_back(i);
            }
            else{
                st.push({s[i],i});
            }

        }
        vector<int> p;
        while(!st.empty()){
            p.push_back(st.top().second);
            st.pop();
        }
        for(int i = p.size()-1;i>=0;i--){
            invalid.push_back(p[i]);
        }
        invalid.push_back(s.size());
        for(int i = 0 ; i<invalid.size()-1;i++){
            mx=max(mx,invalid[i+1]-invalid[i]-1);
        }
        return mx;
    }
};