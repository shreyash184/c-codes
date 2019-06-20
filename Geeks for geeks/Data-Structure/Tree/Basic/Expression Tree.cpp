{
#include<bits/stdc++.h>
using namespace std;
struct node{
	string data;
	node *left;
	node *right;
};
int evalTree(node *);
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	int p=0;
	node *root = new node;
	root->data = s[p];
	root->left=NULL;
	root->right=NULL;
	queue<node *> q;
	q.push(root);
    p=1;
	while(!q.empty())
	{
		node *f = q.front();
		q.pop();
		node  *l,*r;
		if(p!=n){
        l=new node;
		l->data = s[p];
		f->left = l;
		p++;
		q.push(l);
	    }
	    else
	    {
	    	f->left = NULL;
	    }
		if(p!=n){
        r=new node;
		r->data = s[p];
		f->right = r;
		p++;
		q.push(r);
		}else
		{
			f->right=NULL;
		}
	}
	cout<<evalTree(root)<<endl;
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
/*The structure of node is as follows
struct node{
	string data;
	node *left;
	node *right;
};
*/

int toInt(string s){
    stringstream geek(s); 
  
    // The object has the value 12345 and stream 
    // it to the integer x 
    int x = 0; 
    geek >> x; 
    return x;
}

/*You are required to complete below method */
int evalTree(node* root)
{
    //Your code here
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return toInt(root->data);
    int l = evalTree(root->left);
    int r = evalTree(root->right);
    
    if(root->data == "+")
        return l+r;
    if(root->data == "*")
        return l*r;
    if(root->data == "-")
        return l-r;
    return l/r;
}
