#include <iostream>
using namespace std;
int fact(int n) {
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int n;
	cout<<"enter the number of which you want factorial";
	cin>>n;
	cout<<"factorial of "<<n<<"is "<<fact(n);
	return 0;
}
