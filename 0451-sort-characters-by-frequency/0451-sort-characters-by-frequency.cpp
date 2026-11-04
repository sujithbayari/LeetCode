class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char, int> freq;
        vector<string> bucket(s.size()+1);

        for(char c : s)
            freq[c] ++;
        
        for(auto it : freq)
            bucket[it.second].append(it.second, it.first);
        
        for(int i=bucket.size()-1; i>=1; i--)
            ans +=bucket[i];

        return ans;
    }
};