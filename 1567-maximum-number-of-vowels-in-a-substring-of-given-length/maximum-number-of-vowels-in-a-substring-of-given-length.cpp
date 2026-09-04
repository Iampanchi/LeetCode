class Solution {
public:
    int maxVowels(string s, int k) {
        int curr=0;
        int mx=0;
        string p = "aeiou";
        for(int i = 0 ;i<k-1;i++){
            if(p.contains(s[i])){
                curr++;
            }
        }
        mx=curr;
        for(int i =k-1;i<s.size();i++){
            if(p.contains(s[i])){
                curr++;
                mx=max(mx,curr);
            }
            if(p.contains(s[i+1-k])){
                curr--;
            }
        }
        return mx;
    }
};