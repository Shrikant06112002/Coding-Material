import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        // int mark[] = { 10, 20, 30, 40 };
        // for (int i : mark) {
        // System.out.println(i);
        // }
        // int[][] flats = { { 10, 20 }, { 30, 40 }, { 50, 60 } };
        // // System.out.println(flats[0][1]);
        // for (int i = 0; i < flats.length; i++) {
        // for (int j = 0; j < flats[i].length; j++) {
        // System.out.print(flats[i][j]);
        // System.out.print(" ");
        // }
        // System.out.println("");

        // input of 1-D array
        // Scanner sc = new Scanner(System.in);
        // System.out.println("how many element");
        // int m = sc.nextInt();
        // int arr[] = new int[m];
        // System.out.println("enter the element");
        // for (int i = 0; i < m; i++) {
        // arr[i] = sc.nextInt();
        // }
        // System.out.println("element in array");
        // for (int i = 0; i < m; i++) {
        // System.out.println(arr[i]);
        // }

        // // input of 2-d array
        // Scanner sc = new Scanner(System.in);
        // System.out.println("how many rows");
        // int m = sc.nextInt();
        // System.out.println("how many columns");
        // int n = sc.nextInt();
        // int arr[][] = new int[m][n];
        // System.out.println("enter the element");
        // for (int i = 0; i < m; i++) {
        // for (int j = 0; j < n; j++) {
        // arr[i][j] = sc.nextInt();
        // }
        // }
        // System.out.println("elemnet in array");
        // for (int i = 0; i < m; i++) {
        // for (int j = 0; j < n; j++) {
        // System.out.print(arr[i][j]);
        // System.out.print(" ");
        // }
        // System.out.println("");
        // }
        // sc.close();

        // // sum
        // float sum[] = { 10.5f, 85, 4.5f, 6.3f, 5, 8 };
        // float result = 0;
        // for (float f : sum) {
        // // System.out.println(f);
        // result += f;
        // }
        // System.out.println(result);

        // search
        int sea[] = { 10, 20, 30, 4, 1, 2, 7 };
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the serach element");
        int m = sc.nextInt();

        for (int i = 0; i < sea.length;i++) {
            if (sea[i] == m) {
                System.out.println("element are found");
                break;
            } else {
                System.out.println("element are not found");
                break;
            }
        }
        sc.close();

    }

}
