#include <iostream>
#include <stack>
#include <string>

using namespace std;
int prec(char op)
{
	if(op=='^')
	return 3;
	else if(op=='*'||op=='/')
	return 2;
	else if(op=='+'||op=='-')
	return 1;
	else
	return -1;
}
string infixtopostfix(string s)
{	string ns="";
	std::stack<char>st;
	st.push('N');
	for(int i=0;i<s.length();i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			ns=ns+s[i];
		}
		else if(prec(s[i])>0)
		{
			char c=st.top();
			if(prec(s[i])>prec(c))
			{	
				st.push(s[i]);
			}
			else if(prec(s[i])<prec(c))
			{
				for(int i=0;i<st.size();i++)
				{
					ns=ns+st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			else if(prec(s[i])==prec(c))
			{
				ns=ns+st.top();
				st.pop();
				st.push(s[i]);
			}
			
		}
			else if(s[i]=='(')
			{
				st.push(s[i]);
				
			}
			 else if (s[i] == ')') {
 
            			while (st.top() != '(') {
                		ns += st.top();
                		st.pop();
            		}
				st.pop();
			}
	}			
				for(int i=0;i<st.size();i++)
				{
					ns=ns+st.top();
					st.pop();
				}	
	return ns;
	
}
int main()
{
string exp;
cout<<"enter the expression you want to convert";
cin>>exp;
cout<<infixtopostfix(exp);
return 0;
}
