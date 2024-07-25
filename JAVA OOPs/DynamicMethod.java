class phone {
    public void on() {
        System.out.println("turning on phone");
    }

    public void great() {
        System.out.println("i am great");
    }
}

class Smartphone extends phone {
    @Override
    public void on() {
        System.out.println("truning on smartphone");
    }

    public void welcome() {
        System.out.println("welcome");
    }

}

public class DynamicMethod {
    public static void main(String[] args) {
        // phone o = new phone();
        // Smartphone s = new Smartphone();
        phone os = new Smartphone();
        // Smartphone so = new phone();
        // invalid becz parent class se child class ko refernce ker sakte he
        os.great();
        os.on();//jiske name se obj create hua he uska run hoga matalab new ke samne wala kyy smart phone ka
    }

}
