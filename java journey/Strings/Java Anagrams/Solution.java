import java.util.Scanner;

public class Solution {

    static String sortingWord(String a){
        char tempArray[] = a.toCharArray();
        
        char temp;
        for(int i = 0 ; i < tempArray.length ; i++){
            for(int j = i+1 ; j < tempArray.length ; j++){
                if(tempArray[i] > tempArray[j]){
                    temp = tempArray[i];
                    tempArray[i] = tempArray[j];
                    tempArray[j] = temp;
                }
            }
        }
        
        return new String(tempArray);
    }

    static boolean isAnagram(String a, String b) {
        // Complete the function
        a = a.toLowerCase();
        b = b.toLowerCase();
        a = sortingWord(a);
        b = sortingWord(b);
        return (a.equals(b)) ? true : false;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}