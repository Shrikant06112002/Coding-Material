public class method2 {
    static void change1(int a) {
        a = 34;
    }

    static void change2(int[] arr) {
        arr[0] = 34;
    }

    public static void main(String[] args) {
        // cas-1 change the integer
        int a = 64;
        change1(a);
        System.out.println(a);
        // doesn't change

        // c-2 xhange the array
        int[] arr = { 10, 20, 30 };
        change2(arr);
        System.out.println(arr[0]);

    }

}
