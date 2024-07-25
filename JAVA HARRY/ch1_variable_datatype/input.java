import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        // System.out.println("taking input from user");
        Scanner sc = new Scanner(System.in);

        // System.out.println("enter the first number");
        // // int a = sc.nextInt();
        // float a = sc.nextFloat();
        // System.out.println("enter the second number");
        // // int b = sc.nextInt();
        // float b = sc.nextFloat();

        // // int sum = a + b;
        // float sum = a + b;
        // System.out.println("the sum of " + a + " and " + b + " is " + sum);

        // String str = sc.next(); // it print only first word
        // System.out.println(str);
        String ctr = sc.nextLine(); // it print all line
        System.out.println(ctr);
        // boolean c = sc.hasNext();
        // System.out.println(c);
        sc.close();
    }
}
