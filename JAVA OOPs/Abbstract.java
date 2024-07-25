abstract class Parent {
    public Parent() {
        System.out.println("constructor of Base class");
    }

    public void hello() {
        System.out.println("hello");
    }

    abstract public void Great();

    abstract public void Great2();

}

class Child extends Parent {
    @Override
    public void Great() {
        System.out.println("good monri  g");
    }

    @Override
    public void Great2() {
        // TODO Auto-generated method stub

    }

}

abstract class Child2 extends Parent {
    public void th() {
        System.out.println("i am good");

    }
}

public class Abbstract {

    public static void main(String[] args) {
        // Parent p = new Parent();
        //
        Child c = new Child();
        // Child2 c2 =new Child2();error becz of abstarctiion doesn't make obj
        c.Great();
        c.Great2();
        c.hello();
        Parent p = new Child();// valid dynamic memory dispatch
        p.Great();
        p.Great2();
        p.hello();

    }

}
