class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mpp;
      for(auto it:arr1){
        mpp[it]++;
      }
      vector<int>v;
      for(int i=0;i<arr2.size();i++){
        if(mpp.find(arr2[i])!=mpp.end()){
          int k=mpp[arr2[i]];
          while(k--){
            v.push_back(arr2[i]);
          }
        }
        mpp.erase(arr2[i]);
      }
      for(auto it:mpp){
        int f=it.second;
        while(f--){
          v.push_back(it.first);
        }
      }
      return v;
    }
};