import java.util.Scanner;

public class pranjal {
    public static void main(String[] args) {
        // Scanner x = new Scanner(System.in);
        // System.out.println("enter the number");
        // int days = x.nextInt();
        // switch (days) {
        // case 1:
        // System.out.println("monday");
        // break;
        // case 2:
        // System.out.println("tuesday");
        // break;
        // case 3:
        // System.out.println("wenesday");
        // break;
        // case 4:
        // System.out.println("thursday");
        // break;
        // case 5:
        // System.out.println("friday");
        // break;
        // default:
        // System.out.println("enter invalid");
        // break;
        // }
        // x.close();
        // try (Scanner z = new Scanner(System.in)) {
        // System.out.println("enter year");
        // int a = z.nextInt();
        // if (a % 4 == 0) {
        // System.out.println("its leap year");
        // } else {
        // System.out.println("its not");

        // }
        // }
        // int i = 0;
        // int sum = 0;
        // while (i <= 3) {
        // if (i % 2 == 0) {
        // sum += i;
        // }
        // i++;
        // }
        // System.out.print(sum);

        // try (Scanner ab = new Scanner(System.in)) {
        // int a = ab.nextInt();
        // double b = ab.nextDouble();
        // ab.nextLine();
        // String c = ab.nextLine();

        // System.out.println("String: " + a);
        // System.out.println("Double: " + b);
        // System.out.println("Int: " + c);
        // }
        try (Scanner scan = new Scanner(System.in)) {
            int a = scan.nextInt();
            for (int i = 1; i <= 10; i++) {
                System.out.println(a + "x" + i + "=" + a * i);
            }
        }

    }
}
