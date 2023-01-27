import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        BigInteger tempA = new BigInteger(a);
        BigInteger tempB = new BigInteger(b);
        System.out.println(tempA.add(tempB));
        System.out.println(tempA.multiply(tempB));                  
    }
}