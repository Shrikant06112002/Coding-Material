// import java.util.Scanner;

// import basic.sahu;

// import java.util.Scanner;

public class methods_exercise {
    // //1- multipicationn table
    // public static void main(String[] args) {
    // Scanner sc = new Scanner(System.in);
    // System.out.println("enter the number");
    // int n = sc.nextInt();
    // table(n);
    // sc.close();

    // }

    // static void table(int n) {
    // for (int i = 0; i <= 10; i++) {
    // System.out.println(i * n);
    // }
    // }

    // //2- pattern print
    // public static void main(String[] args) {
    // int n = 4;
    // pattern(n);

    // }

    // static void pattern(int n) {
    // for (int i = 0; i <= n; i++) {
    // for (int j = 0; j < i; j++) {
    // System.out.print("*");
    // }
    // System.out.println("");
    // }
    // }

    // //5- recursive function calculte sum of n naatural no.
    // public static void main(String[] args) {
    // Scanner sc = new Scanner(System.in);
    // System.out.println("enter thr no.");
    // int i = sc.nextInt();

    // System.out.println(sum(i));
    // }

    // static int sum(int i) {
    // if (i == 1) {
    // return 1;
    // }
    // else{
    // return i + sum(i - 1);
    // }
    // }

    // // 6-average
    // public static void main(String[] args) {
    // System.out.println(avg(10, 20, 30, 40));
    // }

    // static int avg(int... average) {
    // int result = 0;
    // for (int i : average) {
    // result += i;
    // }
    // return result / average.length;
    // }

    // 7-pattern recursion
    public static void main(String[] args) {
        pat(3);
    }

    static void pat(int n) {
        if (n > 0) {
            pat(n - 1);
            for (int i = 0; i < n; i++) {
                System.out.print("*");
            }
            System.out.println();
        }
        // pat(3)
        // pat(2)+3star and new line
        // pat(1)+3star and new line+2 start new line
        // pat(0)+3star and new line+2 start new line+1strat new line


    }

}
