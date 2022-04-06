import java.util.*;
import java.io.*;

class Solution {
    public static void main(String[] argh) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int start = 1;
            int sumAll = 0;
            for (int j = 0; j < n; j++) {
                int sum = a + sumAll + start * b;
                if (j != 0)
                    System.out.print(" ");
                System.out.print(sum);
                sumAll += start * b;
                start *= 2;
            }
            System.out.println();
        }
        in.close();
    }
}