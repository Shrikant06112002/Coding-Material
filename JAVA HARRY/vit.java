public class vit {
    public static void main(String[] args) {
        char ch = ' ';
        System.out.println(ch);

        char h = '$';
        System.out.println(h);
        int a = 10;
        static int c = 34;
        System.out.println(c);

        abc();

        vit v = new vit();
        v.bcd();
        // System.out.println(v.a);

    }

    static void abc() {
        System.out.println("hii");
        // acess directly
        vit vit = new vit();
        System.out.println(vit.c);
    }

    void bcd() {
        int a = 10; // instance variable
        // System.out.println("hello");// donesn't acess directly acess by object

    }

}
