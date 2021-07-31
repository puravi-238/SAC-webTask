import java.util.*;

class SubArray
{
	  public static void main(String [] args)
	  {
		   Scanner scan = new Scanner(System.in);
		   
		   int n;
		   
		   System.out.print("\n\n Enter a Number : ");
		   n = scan.nextInt();
		   
		   int A [] = new int [n];
		   long int sum=0,t=0;
		   int x,y;
		   
		   for(x=0;x<n;x++)
		   {
			     t = 0;
				 for(y=x;y<n;y++)
				      t += A[y];
				  
				  sum += t;	 
		   }
		   
		   System.out.print("\n\n Enter a Number : "  + sum);	   
		   
	  }
}