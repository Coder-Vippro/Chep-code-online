class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int dem=0;
        int k;
        sort(nums.begin(),nums.end());
        for (int i = nums.size()-1; i >=0 ; i--)
        {
            if(nums[i]==nums[i-1])
            {
                dem++;
            }
            else 
            {
                if(dem==nums.size()/2)
                {
                    k=nums[i];
                }
                dem=0;
            }
        }
        return k;
    }
};