{
import java.util.*;
class Numbers{
public static void main(String[] args)
{
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-->0)
	{
		int n=sc.nextInt();
		int[] a=new int[n];
		for(int i = 0; i < n; i++)
		{
			a[i]=sc.nextInt();
		}
		int k=sc.nextInt();
		GfG g=new GfG();
		System.out.println(g.num(a,n,k));
	}
}
}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the Function below*/
class GfG
{
          public static int num(int a[], int n, int k)
            {
                 //Your code here
                 int count=0;
                 String s = Arrays.toString(a);
                 char c[] = s.toCharArray();
                 for(int i=0;i<c.length;i++){
                     if(c[i]==(char)(k+'0'))
                        count++;
                 }
                 return count;
            }
}