import java.util.Scanner;

public class percentage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("____marklist_____");
        System.out.println("enter your physics marks");
        int phy = sc.nextInt();
        System.out.println("enter your chemsitry marks");
        int chem = sc.nextInt();
        System.out.println("enter your math marks");
        int math = sc.nextInt();
        System.out.println("enter your english marks");
        int eng = sc.nextInt();
        System.out.println("enter your bio marks");
        int bio = sc.nextInt();
        float percentage, sum;
        sum = phy + chem + math + eng + bio;
        percentage = (((sum) / 500) * 100);
        System.out.println("congrulation!! your percentile: " + percentage + "%");
        sc.close();
    }
}
