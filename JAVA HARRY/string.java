import java.util.Scanner;

public class string {
    public static void main(String[] args) {
        // String name = new String("shrikant");
        // System.out.println(name);
        // String xyz = "shrikant";
        // System.out.println(xyz);
        // Scanner sc = new Scanner(System.in);
        // String st = sc.nextLine();
        // System.out.println(st);
        // sc.close();

        // practice set
        // Scanner sc = new Scanner(System.in);
        // String newString = sc.nextLine();
        // System.out.println(newString.toLowerCase());
        // System.out.println(newString.trim());
        // System.out.println(newString.replace(" ", "_"));
        // String latterString = "Dear name , thanks a lot";
        // String name = sc.nextLine();
        // System.out.println(latterString.replace("name", name));

        // String doublesString = "sh ri kant ";
        // System.out.println(doublesString.indexOf(" "));
        // System.out.println(doublesString.indexOf(" "));
        // sc.close();
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        String s = scan.nextLine();
        float d = scan.nextFloat();
        // String s = scan.nextLine();
        // Write your code here.

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
        scan.close();

    }
}
