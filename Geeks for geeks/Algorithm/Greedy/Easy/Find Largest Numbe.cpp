#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int grt=0;
        int a[n];
        for(int i=0;i<n;i++)
            {a[i]=9;
             grt+=a[i];           //make a array of n size with all 9 number and take the num of array or 9*n
            }
        int diff=grt-s;   //if n=4,s=15 so grt=36,diff=21  

        for(int i=n-1;i>=0;i--)
        {
            if(diff>9)   //means we are going from back  present array a is 9999
                         //we are doing is 3*100+9*10+9*1 //this 3+9+9=21
            {
                a[i]=0;     
                diff=diff-9;   // now array becames is 9900
            }
            else
               {

                  a[i]=a[i]-diff;       //now diff is 3 so array becames 9600 and this sis answer
                  break;
               }
        }

            if(s>9*n || s==0)
             cout<<-1;        //not possible
            else
                for(int i=0;i<n;i++)
                    cout<<a[i];  //ans is same as for ex is 9999-3*100+9*10+9*1
            cout<<endl;
    }

}
