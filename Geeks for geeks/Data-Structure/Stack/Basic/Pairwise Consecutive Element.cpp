{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
bool pairWiseConsecutive(stack<int> s);
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    while(!s.empty()){
        int f = s.top();
        s.pop();
        int se;
        if(!s.empty()){
            se = s.top();
            s.pop();
        }else{
            se = f-1;
        }
        int x = abs(f-se);
        if(x == 1){
            return true;
        }else{
            return false;
        }
    }
}