#include <iostream>
#include <stack>
#include <string>

using namespace std;
int precedence(char op)
{
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    return 0;
}
int applyOp(int a, int b, char op){
    switch(op){
        case '+': return a+b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}
bool isoperator(char C)
{
	if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')
		return true;

	return false;
}
int evaluate(string s)
{
    stack<int>st1;
    stack<char>st2;
    for(int i=0;i<=s.length();i++)
    {
         if(isdigit(s[i]))
        {
            int val=0;
            while(i<s.length() && isdigit(s[i]))
            {
                val=(val*10)+(s[i]-'0');
                i++;
            }
            i--;
            st1.push(val);
        }
        else if(isoperator(s[i]))
            st2.push(s[i]);
        else if(s[i]=='(')
            {
                st2.push(s[i]);
            }
        else
          {
            if(s[i]==')')
            {
                while(!st2.empty())
                {
                    if(st2.top()!='(' && precedence(st2.top())>= precedence(s[i])){
                    int val2=st1.top();
                    st1.pop();
                    int val1=st1.top();
                    st1.pop();
                    st1.push(applyOp(val1,val2,st2.top()));
                    st2.pop();
                    }
                    else
                        break;


                }
                st2.pop();
            }
            }

    }


    while(!st2.empty())
         {
            int val2=st1.top();
                    st1.pop();
                    int val1=st1.top();
                    st1.pop();
                    st1.push(applyOp(val1,val2,st2.top()));
                    st2.pop();
        }
    return st1.top();
}
int main()
{
    string exp;
    cout<<"enter the number";
    cin>>exp;
    cout<<evaluate(exp);
    return 0;
}
