/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.util.Scanner; 

class GFG {
    
    static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
    
	public static void main (String[] args) {
	    
		//code
		FastReader s=new FastReader();
		int t = s.nextInt();
		for(int z=0;z<t;z++){
		    int n = s.nextInt();
		    int[] a = new int[n];
		    for(int i=0;i<n;i++){
		        a[i] = s.nextInt();
		    }
		    long sum = 0;
		    for(int i=0;i<n-1;i++){
		        for(int j=i+1;j<n;j++){
		            sum+=a[i]^a[j];
		        }
		    }
		    System.out.println(sum);
		}
	}
}