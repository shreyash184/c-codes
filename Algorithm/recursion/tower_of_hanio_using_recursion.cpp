#include <iostream>
using namespace std;
void toh(int n,char beg, char aux, char end) {
	if(n>=1) {
		toh(n-1,beg,end,aux);
		cout<<beg<<"to"<<end<<endl;
		toh(n-1,aux,beg,end);
	}
}
int main() {
	int n=3,beg='a',aux='b',end='c';
	toh(n,beg,aux,end);
	return 0;
}
