import java.io.*;
import java.util.*;

public class Solution {

    
    static int find(int p[], int n, int x) {
      while (x != p[x]) {
        x = p[x];
      }
      return x;
    }

    static void connect(int p[], int s[], int n, int x, int y) {
      int px = find(p, n, x);
      int py = find(p, n, y);
      if (px != py) {
        p[py] = px;
        s[px] += s[py];
        s[py] = 0;
      }
    }

    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);  

        int n, q; 
        n=sc.nextInt(); q=sc.nextInt();
        
        int[] p = new int[n];
        int[] s = new int[n];  
        
        for (int i=0; i<n; i++) {
            p[i] = i;
            s[i] = 1;
        }
        for (int z=0; z<q; z++) {
            String t; int x, y; 
            t = sc.next();
            x = sc.nextInt();
            y = sc.nextInt();
            
            if (t.equals("Check")) {
              int px = find(p, n, x), py = find(p, n, y);
              if (px == py) {
                  System.out.println(s[px]);
              } else {
                  System.out.println(-1);
              }
            } else {
              connect(p, s, n, x, y);
              int px = find(p, n, x);
              System.out.println(s[px]);
            }
        }
    }
}