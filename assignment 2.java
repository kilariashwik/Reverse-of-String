import java.util.*; 

import java.io.*;
class Main
{
    static String leftrotate(String str, int d) 

    { 

            String ans = str.substring(d) + str.substring(0, d); 

            return ans; 

    } 

    public static void main(String args[]) 

    {
    	System.out.println("Enter a string");
    	Scanner read=new Scanner(System.in);
      String str1 = read.nextLine(); 
      System.out.println("enter the Numeber to rotate string:");
      int n=read.nextInt();
      System.out.println(leftrotate(str1, n)); 
     } 
} 