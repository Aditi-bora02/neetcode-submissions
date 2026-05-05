class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> newArr(2*n);

        for(int i=0;i<n;i++){
            newArr[i]=nums[i];
            newArr[n+i]=nums[i];
        }  

        return newArr;  
    }

};