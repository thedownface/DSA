//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> op;
        int n=nums.size();
        for(int i=0;i<n;i++)
        { 
            m[nums[i]]++;
        }
        for(auto i:m)
        {
          if (i.second> n/3)
          {
              op.push_back(i.first);
          }

        }
        return op;
    }
};
