class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        curr=0
        mx=0
        for i in range(0,k-1):
            if(s[i] in "aeiou") :
                curr+=1
        mx=curr
        for i in range(k-1,len(s)):
            if(s[i] in "aeiou"):
                curr+=1
                mx=max(curr,mx)
            if(s[i+1-k] in "aeiou"):
                curr-=1

        return mx
        