class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,c=0,nn=1,res;
        for(i=0;i<nums.size();i++)
        {
            if(nums[c]==nums[i])
                nn++;
            else
                nn--;
            if(nn==0)
            {
                c=i;
                nn=1;
            }
        }
        return nums[c];
    }
};
