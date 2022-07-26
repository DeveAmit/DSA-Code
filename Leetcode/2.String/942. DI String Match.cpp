class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int start=0;
        int end=s.length();
       for(int i=0;i<=s.length();i++){
           if(s[i]=='I'){
            ans.push_back(start);
               start++;
           }
           else{
            ans.push_back(end);
            end--;
           }
        }
        return ans;
    }
};