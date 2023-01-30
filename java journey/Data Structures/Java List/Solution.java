import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        List<Integer> number = new ArrayList<Integer>();
        int n = scan.nextInt();
        int input;
        for(int i = 0 ; i < n ; i++){
            input = scan.nextInt();
            number.add(input);
        }
        int t = scan.nextInt();
        for(int i = 0 ; i < t ; i++){
            String action = scan.next();
            if(action.equals("Insert")){
                int q1 = scan.nextInt();
                int q2 = scan.nextInt();
                number.add(q1, q2);
            }
            if(action.equals("Delete")){
                int q1 = scan.nextInt();
                number.remove(q1);
            }
        }
        for(int i = 0 ; i < number.size() ; i++){
            System.out.print(number.get(i) + " ");
        }
        scan.close();
    }
}