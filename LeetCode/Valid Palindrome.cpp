class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.empty()){
            return true;
        }
        int start = 0;
        int end = s.length()-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);         
        
        while(start<end){
            
            while(start<end && 
                  !(s[start]<=122 && s[start]>=97) &&
                  !(s[start]<=57 && s[start]>=48))
            {
                start++;
            }
            
            while(end>start && 
                  !(s[end]<=122 && s[end]>=97) &&
                  !(s[end]<=57 && s[end]>=48))
            {
                end--;
            }
            
            if(s[start]!=s[end]){
                return false;
            }
            
            start++;
            end--;
        }
        
        return true;
        
    }
};