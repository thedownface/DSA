class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> m;
        vector <string> group;
        vector <vector <string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            string unsorted=strs[i];
            sort(strs[i].begin(),strs[i].end());
            
            m[strs[i]].push_back(unsorted);
        }
        for (auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
