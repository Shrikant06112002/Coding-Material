/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    static int factorial(int n) {
        if (n == 0)
            return 1;
        else
            return (n * factorial(n - 1));
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int c = sc.nextInt();
        for (int j = 0; j < c; j++) {
            int n = sc.nextInt();
            int x = n / 2;
            int m = (int) (x);
            int sum = 0;
            for (int i = 0; i <= m; i++) {
                if (i == 0) {
                    sum = sum + 1;
                    n--;
                } else {
                    int k = factorial(n) / (factorial(n - i) * factorial(i));
                    sum = sum + k;
                    n--;
                }
            }
            System.out.println(sum);
        }

    }
}
