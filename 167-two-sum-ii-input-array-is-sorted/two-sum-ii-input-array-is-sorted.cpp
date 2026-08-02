class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        int sum=numbers[i]+numbers[j];
        while(sum!=target){
            sum=numbers[i]+numbers[j];
            if(sum>target){
                j--;
            }
            else if(sum<target){
                i++;
            }
        }
        return {i+1,j+1};
    }
};