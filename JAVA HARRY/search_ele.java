import java.util.Scanner;

public class search_ele {

    public static void main(String[] args) {
        int[] num = { 10, 20, 30, 40, 50, 60, 70 };
        int flag = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the searching element");
        int s = sc.nextInt();
        for (int i = 0; i < num.length; i++) {
            if (num[i] == s) {
                flag++;
                break;
            }
        }

        if (flag == 1) {
            System.out.println("element are found");
        } else {
            System.out.println("element are not found");
        }
        sc.close();
    }

}
