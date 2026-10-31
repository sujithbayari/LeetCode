class Solution {
public:
    bool isIsomorphic(string s, string t) {

        /*  MY SOLUTION

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
        */

        // Optimal ( Uses two maps(count() takes O(1)) )
        unordered_map<char, char> mp1, mp2;

        for (int i = 0; i < s.size(); i++) {
            if (mp1.count(s[i]) && mp1[s[i]] != t[i])
                return false;

            if (mp2.count(t[i]) && mp2[t[i]] != s[i])
                return false;

            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }

        return true;
    }
};