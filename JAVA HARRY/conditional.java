import java.util.Scanner;

public class conditional {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the physics marks");
        int phy = sc.nextInt();
        System.out.println("enter the math marks");
        int math = sc.nextInt();
        System.out.println("enter the chem marks");
        int chem = sc.nextInt();
        float avg = ((phy + math + chem) / 3);
        if (avg >= 40 && phy >= 33 && math >= 33 && chem >= 33) {
            System.out.println("pass");
        } else {
            System.out.println("fail");
        }

    }
}
