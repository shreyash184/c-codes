class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>v;
        int n = s.length();
        int result = 0;
        v.push(-1);
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                v.push(i);
            }else{
                v.pop();
                
                if(!v.empty()){
                    result = max(result, i-v.top());
                }else{
                    v.push(i);
                }
            }
        }
        return result;
    }
};