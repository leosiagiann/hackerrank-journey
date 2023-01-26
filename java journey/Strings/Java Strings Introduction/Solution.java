import java.io.*;
import java.util.*;

public class Solution {
    
    public static boolean aCheckBig(String a, String b){
        for(int i = 0 ; i < a.length() ; i++){
            if(a.charAt(i) < b.charAt(i)){
                return false;
            }else if(a.charAt(i) == b.charAt(i)){
                continue;
            }else{
                return true;
            }
        }
        return false;
    }
    
    public static String aGreaterB(String a, String b){
        if(a.length() <= b.length()){
            if(aCheckBig(a, b)){
                return "Yes";
            }
            return "No";
        }else{
            if(aCheckBig(b, a)){
                return "No";
            }
            return "Yes";
        }
    }
    
    public static String capitalize(String a){
        String capitalize = "";
        capitalize += Character.toUpperCase(a.charAt(0));
        capitalize += a.substring(1, a.length());
        return capitalize;
    }

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        System.out.println(A.length() + B.length());
        System.out.println(aGreaterB(A, B));
        System.out.println(capitalize(A) + " " + capitalize(B));
    }
}