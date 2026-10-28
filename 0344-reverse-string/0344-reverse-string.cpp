class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int first = 0, last = s.size()-1, temp;
        while(first<last)
        {
            temp = s[last];
            s[last] = s[first];
            s[first] = temp;
            first++;
            last--;
        }
        for(auto it: s)
        {
            cout << it << " ";
        }
    }
};