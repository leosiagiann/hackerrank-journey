import java.util.*;
import java.text.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        // Write your code here.
        NumberFormat formatUs = NumberFormat.getCurrencyInstance(java.util.Locale.US);
        NumberFormat formatIn = NumberFormat.getCurrencyInstance(java.util.Locale.CANADA);        
        NumberFormat formatCh = NumberFormat.getCurrencyInstance(java.util.Locale.CHINA);
        NumberFormat formatFr = NumberFormat.getCurrencyInstance(java.util.Locale.FRANCE);
        String us = formatUs.format(payment);
        String india = formatIn.format(payment);
        india = india.substring(1, india.length());
        india = "Rs." + india;
        String china = formatCh.format(payment);
        String france = formatFr.format(payment);
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}