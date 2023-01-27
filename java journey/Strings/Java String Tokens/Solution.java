import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        scan.close();
        List<String> result = new ArrayList<String>();
        String temp = "";
        for(int i = 0 ; i < s.length() ; i++){
            if((s.charAt(i) >= 'a' && s.charAt(i) <= 'z')
            || s.charAt(i) >= 'A' && s.charAt(i) <= 'Z'){
                temp += s.charAt(i);
            }else{
                if(temp.length() > 0){
                    result.add(temp);
                    temp = "";
                }
            }
        }
        if(temp.length() > 0){
            result.add(temp);
            temp = "";
        }
        int lenght = result.size();
        System.out.println(lenght);
        for(int i = 0 ; i < lenght ; i++){
            System.out.println(result.get(i));
        }
    }
}