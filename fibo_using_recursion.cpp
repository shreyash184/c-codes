#include <iostream>
using namespace std;
int fibo(int n)
{
	return (n==0||n==1 ? n : fibo(n-1)+fibo(n-2));
}
int main()
{
	int n;
	cout<<"enter the no. ";
	cin>>n;
	for(int i=0; i<n;i++)
	cout<<fibo(i);
	return 0;
}
