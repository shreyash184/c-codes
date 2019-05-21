#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool para(string s){
	stack <char> st;
	char x;
	for(int i = 0;i<s.length();i++) {
		if(s[i]=='('||s[i]=='['||s[i]=='{'){
			st.push(s[i]);
			continue;
		}
		
		if(st.empty())
			return false;
		switch(s[i])
		{
			case ')':
					x=st.top();
					st.pop();
					if(x=='{'||x=='[')
						return false;
					break;
			case '}':
					x=st.top();
					st.pop();
					if(x=='('||x=='[')
						return false;
					break;
			case ']':	
					x=st.top();
					st.pop();
					if(x=='('||x=='{')
						return false;
					break;
		}
	}
		return (st.empty());
}
int main()
{
    string expr = "{()}[]";
 
    if (para(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
