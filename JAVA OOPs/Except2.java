import java.util.Scanner;

//handeling specific exception
public class Except2 {
    public static void main(String[] args) {
        int[] marks = new int[5];
        marks[1] = 25;
        marks[0] = 1;
        marks[2] = 6;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array index ");
        int ind = sc.nextInt();

        System.out.println("Enter number to divide with ");
        int num = sc.nextInt();

        try {
            System.out.println("value at given index: " + marks[ind]);
            System.out.println("division : " + marks[ind] / num);
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException occured");
            System.out.println(e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException occured");
            System.out.println(e);
        }
    }
}
