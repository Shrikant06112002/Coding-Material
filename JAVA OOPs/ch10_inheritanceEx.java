// class Rectangle {
//     int b, h, l;

//     Rectangle(int b, int h, int l) {
//         this.b = b;
//         this.h = h;
//         this.l = l;
//     }

//     public int area() {
//         System.out.print("area of rectangle: ");
//         return b * h;
//     }

//     public int volume() {
//         System.out.print("volume of rectangle: ");
//         return l * b * h;
//     }
// }

// class Cuboid extends Rectangle {
//     Cuboid(int b, int h, int l) {
//         super(10, 20, 30);
//     }

//     public int carea() {
//         System.out.print("area of cubiod: ");
//         return (2 * l * b) + (2 * l * h) + (2 * b * h);
//     }
// }

// public class ch10_inheritanceEx {
//     public static void main(String[] args) {
//         // Rectangle r = new Rectangle(10, 20, 30);
//         // System.out.println(r.area());
//         // System.out.println(r.volume());
//         Cuboid c = new Cuboid(10, 20, 30);
//         System.out.println(c.carea());
//         System.out.println(c.area());
//         System.out.println(c.volume());

//     }

// }

// *************************************
//Q2)
class Rectangle {
    private int b;
    private int h;

    Rectangle() {

    }

    public void setA(int b) {
        this.b = b;
    }

    public int getB() {
        return b;
    }

    public void setB(int h) {
        this.h = h;
    }

    public int getH() {
        return h;
    }

    public int area() {
        System.out.print("area: ");
        return h * b;
    }
}

public class ch10_inheritanceEx {
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        r.setA(10);
        r.setB(20);
        System.out.println(r.area());
    }
}