class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' '){
            i++;
        }
        int sign=1;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        long long a=-2;
        long long b=2;
        for(int i =1;i<=30;i++){
            a*=2;
            b*=2;
        }
        long long num=0;
        while(i!=s.size() && s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
            i++;
            if(num>b){
                break;
            }
        }
        
        b-=1;
        num*=sign;
        if(num<a){
            return a;
        }
        else if(num>b){
            return b;
        }
        return num;
    }
};