{
#include<bits/stdc++.h>
using namespace std;
void  printSpace(char str[]);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        printSpace(str);
        cout<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

void pos(char str[],char buf[], int i, int j, int n){
    //i is the index of buf and j is the index of the str
    if(i == n){
        buf[j] = '\0';
        cout<<buf<<"$";
        return;
    }
    
    //either put the char
    buf[j] = str[i];
    pos(str, buf, i+1, j+1, n);
    
    //Or either put char followed by space
    buf[j] = ' ';
    buf[j+1] = str[i];
    pos(str, buf, i+1, j+2, n);
}

/*You have to complete this function*/
void  printSpace(char str[])
{
    //Your code here
    int n = strlen(str);
    
    char buf[2*n];
    buf[0] = str[0];
    pos(str, buf, 1, 1, n);
}