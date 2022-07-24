class Solution {
public:
    
    string decoded_string(string s,int& index){
        string result;
        
        
        while(index<s.length() && s[index]!=']'){
         
          
            if(isdigit(s[index])){
                
                int k=0;
               
                while(index<s.length() && isdigit(s[index])){
                    // using formula of expended form.
                    k=k*10+s[index++] -'0';
                    
                }
                
                index++;
                

                string r = decoded_string(s,index);
                
                while(k-- > 0){
                    result+=r;
                }
                
                 
                index++;
                
            }
            else{
                result+=s[index++];
            }
        }
        
        return result;
        
        
    }
    
    
    
    string decodeString(string s) {
        int index=0;
        
        return decoded_string(s,index);
    }
};