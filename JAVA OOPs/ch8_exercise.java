public class ch8_exercise {
    // public static void main(String[] args) {
    // // problem 1
    // Employee shri = new Employee();
    // shri.name = "shrikant";
    // shri.salary = 150000;
    // System.out.println(shri.getName() + " " + shri.getSalary());
    // shri.setName("harry");
    // System.out.println(shri.getName() + " " + shri.getSalary());

    // // problem 2
    // CellPhone ph = new CellPhone();
    // ph.ring();
    // ph.vibrate();
    // }

    // }

    // class Employee {
    // int salary;
    // String name;

    // public int getSalary() {
    // return salary;
    // }

    // public String getName() {
    // return name;
    // }

    // public void setName(String n) {
    // name = n;
    // }
    // }

    // class CellPhone {
    // public void ring() {
    // System.out.println("Ringing");
    // }

    // public void vibrate() {
    // System.out.println("vibrating");
    // }
    // }

    // problem 3
    public static void main(String[] args) {
        square sq = new square();
        sq.side = 5;
        System.out.println("side: " + sq.side() + "\narea: " + sq.area() + "\nperimetre: " + sq.perimetre());

    }
}

class square {
    int side, area, peri;

    public int side() {
        return side;
    }

    public int area() {
        return side * side;
    }

    public int perimetre() {
        return side * 4;
    }

}
