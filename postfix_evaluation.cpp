#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool IsOperator(char);
int applyOn(int a,int b,char op)
{
    switch(op)
    {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
    }
}
int evaluate(string s)
{
    stack<int>st;            //to store the interger in the stack;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ' || s[i]==',')
            continue;


        else if(IsOperator(s[i]))
        {
                    int val2=st.top();
                    st.pop();
                    int val1=st.top();
                    st.pop();
                    int x=applyOn(val1,val2,s[i]);
                    st.push(x);
        }
         else if(isdigit(s[i]))
        {
            int val=0;
            while(i<s.length() && isdigit(s[i]))
            {
                val=(val*10)+(s[i]-'0');
                i++;
            }

            st.push(val);
        }

    }
    return st.top();
}
bool IsOperator(char C)
{
	if(C == '+' || C == '-' || C == '*' || C == '/')
		return true;

	return false;
}
int main()
{
    string exp={"100 500 +"};
    cout<<"evaluated value :"<<evaluate(exp)<<endl;

    return 0;
}
