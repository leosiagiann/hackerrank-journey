import java.util.Scanner;

public class Solution {

    public static String minSubs(String a, String b){
        for(int i = 0 ; i < a.length() ; i++){
            if(a.charAt(i) < b.charAt(i)){
                return a;
            }else if(a.charAt(i) > b.charAt(i)){
                return b;
            }else{
                continue;
            }
        }
        return a;
    }

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = s.substring(0, k);
        String largest = s.substring(0, k);
        for(int i = 1 ; i < s.length() - (k - 1) ; i++){
            String subs = s.substring(i, i+k);
            smallest = minSubs(subs, smallest);
            if(largest == minSubs(subs, largest)){
                largest = subs;
            }
        }
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}