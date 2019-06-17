{
#include<bits/stdc++.h>
using namespace std;
int maxHeight(int height[],int width[],int length[],int n);
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	
 	int A[1000],B[1000],C[10001];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}
	cout<<maxHeight(A,B,C,n)<<endl;
}
 
} 
}
/*This is a function problem.You only need to complete the function given below*/
/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/

struct Box{
    int h,d,w;
};

int compare (const void *a, const void * b) 
{ 
    return ( (*(Box *)b).d * (*(Box *)b).w ) - 
           ( (*(Box *)a).d * (*(Box *)a).w ); 
} 

int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    Box rot[3*n];
   int index = 0;
   for (int i = 0; i < n; i++)
   {
      // Copy the original box
      rot[index].h = height[i];
      rot[index].d = max(length[i], width[i]);
      rot[index].w = min(length[i], width[i]);
      index++;

      // First rotation of box
      rot[index].h = width[i];
      rot[index].d = max(height[i], length[i]);
      rot[index].w = min(height[i], length[i]);
      index++;

      // Second rotation of box
      rot[index].h = length[i];
      rot[index].d = max(height[i], width[i]);
      rot[index].w = min(height[i], width[i]);
      index++;
   }

   // Now the number of boxes is 3n
   n = 3*n;
   qsort (rot, n, sizeof(rot[0]), compare);
   int msh[n];
   for (int i = 0; i < n; i++ )
      msh[i] = rot[i].h;

   /* Compute optimized msh values in bottom up manner */
   for (int i = 1; i < n; i++ )
      for (int j = 0; j < i; j++ )
         if ( rot[i].w < rot[j].w &&
              rot[i].d < rot[j].d &&
              msh[i] < msh[j] + rot[i].h
            )
         {
              msh[i] = msh[j] + rot[i].h;
         }
   /* Pick maximum of all msh values */
   int max = -1;
   for ( int i = 0; i < n; i++ )
      if ( max < msh[i] )
        max = msh[i];

   return max;
}