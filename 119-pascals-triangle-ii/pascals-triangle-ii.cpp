class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a(rowIndex+1),b(rowIndex+1);
        if(rowIndex==0){
            return {1};
        }
        if(rowIndex==1){
            return {1,1};
        }
        a[0]=a[1]=1;
        for(int i = 2 ; i<rowIndex+1;i++){
            b[0]=1;
            b[i]=1;
            for(int j = 1 ; j<i;j++){
                b[j]=a[j-1]+a[j];
            }
            a=b;
        }
        return a;
        
    }
};