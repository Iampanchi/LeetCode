class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n%2==1){
            return false;
        }
        stack<char> st;
        map<char,char> mp;
        mp['(']=')';
        mp['{']='}';
        mp['[']=']';
        for(int i = 0 ;i<n;i++){
            if(!st.empty() && mp[st.top()]==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;

    }
};