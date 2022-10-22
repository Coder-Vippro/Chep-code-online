class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=size(nums)-1;
        int f[100001];
        f[0]=nums[0];
        for(int i=1;i<=n;i++)
        {
           f[i]=max(nums[i],f[i-1]+nums[i])
        }
        sort(f,f+n+1);
        return f[n];
    }
};