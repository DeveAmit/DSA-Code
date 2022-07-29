class Solution {
public:
    string sortString(string s) {
        
        vector<int>freq(150, 0);
        
        for(char ch:s)
            freq[ch]++;
        
        string res = "";
        
        bool found = true;
        while(found)
        {
            found = false;
            for(char c='a'; c<='z'; c++)
                if (freq[c])
                {
                    res.push_back(c);
                    freq[c]--;
                    found = true;
                }

            for(char c='z'; c>='a'; c--)
                if(freq[c])
                {
                    res.push_back(c);
                    freq[c]--;
                    found = true;
                }
        }
        
        return res;
    }
};




