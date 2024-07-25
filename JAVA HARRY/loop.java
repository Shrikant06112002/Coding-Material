import java.util.Scanner;

public class loop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // question1 pattern
        // for (int i = 4; i > 0; i--) {
        // for (int j = 0; j < i; j++) {
        // System.out.print(i);
        // }
        // System.out.print("\n");
        // }

        // sum of first n even number
        // System.out.println("enter the number");
        // int i = 0, sum = 0;

        // int n = sc.nextInt();
        // while (i < n) {
        // if (i % 2 == 0) {
        // sum += i;
        // }
        // i++;
        // }
        // System.out.println(sum);

        // multiplication table
        // System.out.println("enter the number");
        // int i = sc.nextInt();
        // for (int j = 1; j <= i; j++) {
        // System.out.println(i * j);
        // }

        // multipication table in reverse
        // System.out.println("enter the number");
        // int i = sc.nextInt();
        // for (int j = i; j > 0; j--) {
        // System.out.println(i * j);
        // }

        // factorial
        System.out.println("enter the number");
        int i = sc.nextInt();
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
            System.out.println(factorial);
        }
        System.out.println(factorial);
        sc.close();

    }
}
