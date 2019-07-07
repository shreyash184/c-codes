class Solution {
public:
    string defangIPaddr(string address) {
        long long int n = address.length();
        string s="";
        for(long long int i=0;i<n;i++){
            if(address[i]=='.'){
                s+="[.]";
            }else{
                s+=address[i];
            }
        }
        return s;
    }
};