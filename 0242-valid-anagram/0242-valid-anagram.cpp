class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> s1, s2;
        if(s.size() != t.size())
            return false;
        for(char cs : s)
        {
            s1.insert(cs);
        }
        for(char ct : t)
        {
            s2.insert(ct);
        }
        return (s1 == s2);
    }
};