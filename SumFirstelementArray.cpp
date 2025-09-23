class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums)
    {
       if(nums.size()==1){
        return 2*nums[0];
       }

        int frist = nums[0];
        int last = nums[nums.size()-1];
        
    
        return frist+last;
    

    }
};
