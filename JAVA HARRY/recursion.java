import java.util.Scanner;

public class recursion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int z=factorail(a);
        

    }

    static int factorail(int a) {
        if (a == 0 || a == 1) {
            return 1;
        } else {
            return a * factorail(a - 1);
        }

  
    }
}
