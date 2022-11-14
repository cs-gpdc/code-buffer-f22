import java.io.*;
import java.util.*;

public class Solution {
  static class Node {
    Node[] children;
    Node() {
      children = new Node[26];
      for(int idx=0; idx<26; idx++) {
        children[idx] = null;
      }
    }
  }
  
  static void insert(Node root, String s) {
    int n = s.length();
    for (int i=0; i < n; i++) {
      int idx = (int)(s.charAt(i) - 'a');
      if (root.children[idx] == null) {
        root.children[idx] = new Node();
      }
      root = root.children[idx];
    }
  }
  static void solve(Node root, StringBuffer s) {
    boolean leaf = true;
    for(int idx=0; idx<26; idx++) {
      if (root.children[idx] != null) {
        leaf = false;
        s.append((char)('a' + idx));
        solve(root.children[idx], s);
        s.deleteCharAt(s.length() - 1);
      }
    }
    if (leaf) System.out.println(s);
  }

  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);  
    int n=sc.nextInt();
    Node root = new Node();
    for (int i=0; i<n; i++) {
      String s = sc.next();
      insert(root, s);
    }
    StringBuffer s = new StringBuffer();
    solve(root, s);
  }
}