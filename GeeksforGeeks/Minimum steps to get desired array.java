import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int num;
	int n;
	int t=sc.nextInt();
	while(t-- >0)
	    {
	    n=sc.nextInt();
	    int sum=n,max=0,temp=0;
	    while(n-- >0)
	        {
			temp=0;
	        num=sc.nextInt();   
			if(num==1 ) continue;
			if(num==0)  {	--sum;	continue;	}
			while(num!=1)
			if((num&1)==1)	{ --num;	++sum;	}
			else if((num&(num-1))==0)   {temp+=(int)(Math.log(num)/Math.log(2)); break;}
			else	{	num>>=1;++temp;		}
			if(max<temp)  max=temp;//finding max element multiple of 2 in array
	        }
	    System.out.println(sum+max);
	    }
	}
}