import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        String op;
        float a, b;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the calculation method (+,-,*,/): ");
        op = sc.next();
        System.out.println("enter two numbers");
        a = sc.nextInt();
        b = sc.nextInt();
        switch (op) {
            case "+":
                System.out.println(a + b);
                break;
            case "-":
                System.out.println(a - b);
                break;
            case "*":
                System.out.println(a * b);
                break;
            case "/":
                System.out.println(a / b);
                break;
            default:
                System.out.println("you enter invalid choice");
                break;
        }
        sc.close();
    }
}
