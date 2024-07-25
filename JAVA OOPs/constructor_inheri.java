class base {
    public int x = 5;
    // int x = 5;

    base() {// by default without argument wala run hoga
        System.out.println("i am a constructor");
    }

    base(int x) {// YE calne ke liye supar keyword lagana padega base2 ke constructor me
        System.out.println("i am a overloaded constructor with value x: " + x);//
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int multi() {
        // System.out.println(x * x);
        return x * x;

    }
}

class base2 extends base {
    base2() {
        super(10);
        System.out.println("i am base2 derived constructor");
    }

    base2(int x, int y) {
        super(x);
        // super(10,20); edhere nahi laga sakte base2 call karte samye lagna hoga
        System.out.println("i am base2 overloaded constructoe with value x and y : " + x + " " + y);
    }
}

class childBase2 extends base2 {
    childBase2(int x, int y, int z) {
        super(x, y);
        System.out.println("i am childbase2 overloaded constructoe with value x and y and z: " + x + " " + y + " " + z);
    }
}

public class constructor_inheri {
    public static void main(String[] args) {
        // base b = new base();// pahile base ka class constructor first
        // base2 b2 = new base2(10, 20);
        // base class ka bhi constructor ko bhi call krenga becz extends
        // System.out.println(b.x);
        // System.out.println(b2.x);
        // b2.multi();
        // childBase2 cb2 = new childBase2(10, 20, 30);
    }
}
