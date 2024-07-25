public class methods {
    public static void main(String[] args) {
        int a = 4;
        int b = 4;
        // int z = mySum(a, b);
        methods obj = new methods();
        int z = obj.mySum(a, b);
        System.out.println(z);

    }

    // static int mySum(int x, int y) {
    // int c = x + y;
    // return c;
    // }
    int mySum(int x, int y) {
        int c = x + y;
        return c;
    }

}
