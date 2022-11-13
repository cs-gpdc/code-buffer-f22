import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
     // Fills prefix sum array
    static void fillPrefixSum(int arr[], int n, long prefixSum[])
    {
        prefixSum[0] = arr[0];
        // Adding present element with previous element
        for (int i = 1; i < n; ++i)
            prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    
    static boolean BalancedNumber(String s)
    {
        int Leftsum = 0;
        int Rightsum = 0;

        // Calculating the Leftsum
        // and rightSum simultaneously
        for(int i = 0; i < s.length() / 2; i++)
        {

            // Typecasting each character
            // to integer and adding the
            // digit to respective sums
            Leftsum += (int)(s.charAt(i) - '0');
            Rightsum += (int)(s.charAt(
                s.length() - 1 - i) - '0');
        }

        return (Leftsum == Rightsum);
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);  
        int n =sc.nextInt();   
        int[] arr = new int[n];  
        for(int i=0; i<n; i++)  
        {  
        //reading array elements from the user   
        arr[i]=sc.nextInt();  
        }  
        
        long prefixSum[] = new long[n];
        fillPrefixSum(arr, n, prefixSum);
        
//         System.out.println("Array: ");  
//         for (int i=0; i<n; i++)   
//         System.out.println(arr[i]);  
        
//         System.out.println("PrefixSum: ");  
//         for (int i=0; i<n; i++)   
//         System.out.println(prefixSum[i]);  
        
        int count = 0;
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++) {
                long sum = prefixSum[j];
                if (i!=0) sum -= prefixSum[i - 1];
                // System.out.printf("%d %d %d\n", i, j, sum);
                // System.out.println(sum + Boolean.toString(BalancedNumber(Long.toString(sum))));
                if (BalancedNumber(Long.toString(sum))) count++;
            }
        
        System.out.print(count);
    }
}