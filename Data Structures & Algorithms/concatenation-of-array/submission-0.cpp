class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>doubleNums(2*n,0);
        for(int i=0;i<doubleNums.size();i++){
            if(i<n){
                doubleNums[i]=nums[i];
            }
            else{
                doubleNums[i]=nums[i-n];
            }
        }
        return doubleNums;
    }
};