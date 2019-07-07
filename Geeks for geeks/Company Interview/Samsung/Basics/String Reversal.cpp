#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);
	    int n=s.length();
	   unordered_set<char> us;
	   for(int i=n-1;i>=0;i--)
	   {
	   
	       if(s[i]==' ')
	       continue;
	       else if(us.find(s[i])==us.end())
	       {
	           cout<<s[i];
	           us.insert(s[i]);
	           
	       }      
	   }
	
	  cout<<endl;
	}
	return 0;
}