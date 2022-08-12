class Solution {
public:
    string reformat(string s) {
        
        string s1, s2;
        
        for(char ch:s)
            if (isdigit(ch))
                s1.push_back(ch);
            else
                s2.push_back(ch);
        
        string res = "";
        
        if (s1.size() < s2.size())
            swap(s1, s2);        
        
        if(s1.size() - s2.size() > 1)
            return res;
        
        for(int i=0; i<s2.size(); i++)
        {
            res.push_back(s1[i]);
            res.push_back(s2[i]);
        }
        
        if(s1.size() > s2.size())
            res.push_back(s1.back());
        
        return res;
    }
};

    