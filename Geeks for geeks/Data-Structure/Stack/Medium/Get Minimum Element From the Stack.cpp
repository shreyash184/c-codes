{
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){
       int qt;
       cin>>qt;
       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty())return -1;
   stack<int>s1;
   minEle = s.top();
   while(!s.empty()){
       if(s.top() < minEle){
           minEle = s.top();
       }
       s1.push(s.top());
       s.pop();
    }
    while(!s1.empty()){
        s.push(s1.top());
        s1.pop();
    }
    return minEle;
}
/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty())return -1;
   int x = s.top();
   s.pop();
   return x;
}
/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   s.push(x);
}
