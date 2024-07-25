class Vall {
    Vall(int x) {
        System.out.println("Vall");
    }
}

class Sample extends Vall {
    Sample() {
         // Calling the constructor of Vall with parameter 0
        System.out.println("Sample");
        super();
    }

    void rec1() {
        System.out.println("rect");
    }

    public static void main(String[] args) {
        System.out.println("main");
        Sample t = new Sample();
        t.rec1(); // Corrected method call to rec1() instead of reci()
    }
}

