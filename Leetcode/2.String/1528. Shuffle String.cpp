class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        string ans="";
        for(int i=0;i<s.size();i++){
            m[indices[i]]=s[i];
        }
        for(auto val: m){
            //cout<<val.first<<" "<<val.second<<endl;
            ans+=val.second;
        }
        return ans;
    }
};