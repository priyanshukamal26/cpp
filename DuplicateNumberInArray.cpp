class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int ele;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     ele=nums[i];

        //     for(int j=0; j<nums.size() && j!=i; j++)
        //     {
        //         if(nums[j]==ele)
        //             return ele;
        //     }
        // }
        // return 0;

        int max = INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > max)
                max = nums[i];
        }

        int freq[max + 1];
        
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
            // if(freq[nums[i]] > 1)
            //     return nums[i];
        }
        int re = 0;
        
        for(int i=0; i<max+1; i++)
        {
            if(freq[i]>1)
                re = i;
                break;
        }
        return re;
    }
};