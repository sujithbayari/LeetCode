class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> um;
        vector<char> tchar;
        int i = 0;
        while(i<s.size())
        {
            if( !(um.count(s[i])) )
            {
                if(count(tchar.begin(), tchar.end(), t[i]))
                    return false;

                um[s[i]] = t[i];
                tchar.push_back(t[i]);
            }
            else if(um[s[i]] != t[i])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};