class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        int w = 0;
        int u = 0;
        int start = -1;
        int end = 0;
        
        if( k >= n) {
            start = 0;
            end = n-1;
            while(start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            return s;
        }
        
        while(2 * k * u <= n) {
            start = 2*k*u;
            if(start + k - 1 <= n-1) {
                if(u != 0)
                    end = start + k - 1;
                else 
                    end = k - 1;
                }
            while(start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            
            u++;
            
            if(n-2*k*u < k) {
                end = n-1; 
            }
        }
        return s;
      }
};