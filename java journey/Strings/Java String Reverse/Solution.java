import java.io.*;
import java.util.*;

public class Solution {
    
    public static boolean isPalindrome(String s){
        for(int i = 0 ; i < s.length() / 2 ; i++){
            if(s.charAt(i) != s.charAt(s.length() - i - 1)){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        System.out.println((isPalindrome(A)) ? "Yes" : "No");
    }
}