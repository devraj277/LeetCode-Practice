class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    int n = strs.size(), i=0;
    string temp="";
    while(i < strs[0].size() && i < strs[n-1].size() && strs[0][i] == strs[n-1][i]){
        temp += strs[0][i];
        i++;
    }
    return temp;
    }
};